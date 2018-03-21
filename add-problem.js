let cheerio = require('cheerio');
let fs = require('fs-extra');
let promisify = require('util').promisify;
let fetchUrl = require("fetch").fetchUrl;

fetchUrl[promisify.custom] = function (url) {
    return new Promise((resolve, reject) => {
        fetchUrl(url, function (error, meta, body) {
            error ? resolve(error) : resolve(body.toString());
        });
    })
};

// fs.outputFile[promisify.custom] = function (path, data) {
//     return new Promise((resolve, reject) => {
//         fs.outputFile
//     })
// }

const fetchUrlAsync = promisify(fetchUrl);
const outputJsonAsync = promisify(fs.outputJson);
const readFileAsync = promisify(fs.readFile);


let type = process.argv.length < 3 ? "js" : process.argv[2];

