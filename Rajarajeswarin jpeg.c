<!DOCTYPE html>
<html>
<head>
    <title> your name- Portfolio</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            margin:0;
            padding:0;
            background-color: #f0f0f0;
          }

          header {

            background-color: #333;
            color: #fff;
            text-align: center;
            padding: 2rem 0;
            position: relative; /* Add this */

        }
       .header-content h1 {
     font-size: 2.5rem;

        }

        /* Add styles for the round profile picture */
        .profile-pitcher{
            width: 100px; /* Adjust the size as needed */
            height: 100px;
            border-radius: 75%; /*creat a circular shape */
            object-fit: cover; /* To ensure a circular shap */
            position:absolute; /* Add this */
            top: 75px; /* Adjust top position as neede*/
            left: 75px; /* Adjust left position as needed */

        }

        nav {

               background-color: #333;
                color: #fff;
                text-align: center;
              }

        nav ul {
               list-style-type: none;
                padding:0;
        }

        nav ul li {
                 display: inline;
                 margin: 0 20px;
        }

        nav ul li{
               text-decoration: none;
               color: #fff;
        }
        .section-content {
             background-color: #fff;
              padding: 1rem;
             margin: 2rem;
             border-radius: 20px;
              box-shadow: 0 0 10px rgba(0,0,0,1);
      }

      .download-button{
        background-color: #333;
        color: #fff;
        padding: 0.5rem 1rem;
        text-decoration: none;
        border-radius: 20px;
        display:inline-block;
        margin-top: 10px;
      }
      .download-button:hover {
        background-color: aqua;
      }
      footer {
        text-align: center;
        padding: 1rcea 0;
        background-color: #333;
        color: #fff;
      }
      ul {
        list-style-type: square;
        padding-left: 20px;
      }
      </style>
        </head>
        <body>
            <header>
                <div class="header-content">
                    <!--Add your profile picture hear-->
                    <img src="rajarajeswari n.jpeg" alt="ypur profile">
                    <h1>rajarajeswari</h1>
                    <p> passionate on Learing</p>
                    <div>
            </header>
      
        <nav>
        <ul>
                    <li><a href="#About">About</a></li>
                    <li><a href="#education">Education</a></li>
                    <li><a href="#Skills">skiills</a></li>
                    <li><a href="#project">project</a></li>
                    <li><a href="#Resume">resume</a></li>
              </ul>
       </nav>

       <section id="about">
              <div class=".section-content">
                  <h2>About Me</h2>
                   <p>Hello Everyone! this is RAJARAJESWARI N and i am a computer science leanner_</p>
              </div>
        </section>

    <section id="Education">
        <div class=".section-content">
           <h2>B.sc.</h2>
           <p>MRK arts and science of pazhanchanallur-CS</p>
        </div>
        </section>

        <section id-"Skills">
          <div class=".section-content">
                <h2>Skills</h2>
                <ul>
                  <li>Python</li>
                  <li>Artificial Intelligence</li>
                  <li>Machine Learing</lt>
                  <li>Deep Learing</li>
                  <il>progromming</li>
            </uI>
        </div>
        </section>

        <sction id="Projects">
          <div class=".section-content">
              <h2>projects</h2>
              <ul>
                 <li><a href="#">projects 1</a></li>
                <li><a href="#">projects 2</a></li>
                <!--Add more project links hear-->
         </uI>
         </div>
      </section>

    <section id="resume">
     <center>
           <div class=".section-content">
               <h2>Resume</h2>
               <a href="c:\Users\ADMIN\.vscode\CSS\javascript\profile" class=".download-button">Download cv/a>
            </div>
        </center>
     </section>

     <footer>
        <p>&copy;2023 RAJARAJESWARI</P>
            <footer>

     <script>
         //smooth scrolling to section when clicking on navigation links
         document.querySelectorAll('a[href^="#]').forEach(anchor=> {
            anchor.addEventListener('click',function(e) {
                e.preventDefault();

                const targetId =this.getAttribute('href').substring(1);
                const targetelement=document.getElementById(targetId);

                if(targetElement) {
                    window.scrollTo({
                        top:targetElement.offsetTop,
                        behaviour:'smooth'
                    });
                }
            });
         });
        
         </script>
       </body>
  </html>    
