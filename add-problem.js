let cheerio = require('cheerio');
let fs = require('fs-extra');
let promisify = require('util').promisify;
let fetchUrl = require("fetch").fetchUrl;
let proList = require("./problem-list.json");

fetchUrl[promisify.custom] = function (url) {
    return new Promise((resolve, reject) => {
        fetchUrl(url, function (error, meta, body) {
            error ? resolve(error) : resolve(body.toString());
        });
    })
};

const fetchUrlAsync = promisify(fetchUrl);
const outputJsonAsync = promisify(fs.outputJson);
const readFileAsync = promisify(fs.readFile);

let index = process.argv.length < 3 ? 0 : process.argv[2];
let type = process.argv.length < 4 ? "js" : process.argv[3];

(async function (index, type) {
    try {
        console.log('begin......', index, type);
        let pro = proList[index];
        if (pro || 1) {
            //let url = "https://leetcode-cn.com/" + pro.href + "/description/";
            let body = await fetchUrlAsync("https://leetcode-cn.com/problems/two-sum/description/");
            console.log(body);
            let $ = cheerio.load(body);
            console.log($(".question-description").html());
            // await fs.outputFile('./tmp/blog.html', $blog.html())
            // await outputJsonAsync('./tmp/mdn.json', json);
        } else {
            console.log('problem is not exit...');
        }

        console.log('end......');
    } catch (error) {
        console.log('error:', error);
    }
}(index, type));



