<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Placement Portal</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <header>
        <h1>Placement Portal</h1>
    </header>

    <main>
        <section class="form-section">
            <h2>Post a New Placement</h2>
            <form id="placementForm">
                <input type="text" id="company" placeholder="Company Name" required>
                <input type="text" id="role" placeholder="Job Role" required>
                <input type="text" id="location" placeholder="Location" required>
                <button type="submit">Post</button>
            </form>
        </section>

        <section class="list-section">
            <h2>Available Placements</h2>
            <div id="placementList"></div>
        </section>
    </main>

    <script src="script.js"></script>
</body>
</html>
