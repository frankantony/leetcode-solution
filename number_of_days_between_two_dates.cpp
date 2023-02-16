/**
 * @param {string} date1
 * @param {string} date2
 * @return {number}
 */
var daysBetweenDates = function(date1, date2) {
    let numberOfDay = (date) => new Date(date) / 1000 / 3600 / 24;
    console.log (numberOfDay (date1));
    return Math.abs (numberOfDay(date1) - numberOfDay(date2));
};
