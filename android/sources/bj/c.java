package bj;

import a5.k0;
import android.content.Context;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.content.pm.Signature;
import android.text.TextUtils;
import android.util.JsonReader;
import android.util.Log;
import bf.t;
import com.facebook.react.devsupport.StackTraceHelper;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.net.HttpURLConnection;
import java.net.MalformedURLException;
import java.net.URL;
import java.nio.charset.Charset;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.util.concurrent.ExecutionException;
import java.util.regex.Pattern;
import java.util.zip.GZIPOutputStream;
import org.json.JSONException;
import org.json.JSONObject;
import s4.h;
import zi.e;

/* loaded from: classes3.dex */
public final class c {

    /* renamed from: d, reason: collision with root package name */
    public static final Pattern f3025d = Pattern.compile("[0-9]+s");

    /* renamed from: e, reason: collision with root package name */
    public static final Charset f3026e = Charset.forName("UTF-8");
    public final Context a;

    /* renamed from: b, reason: collision with root package name */
    public final yi.a f3027b;

    /* renamed from: c, reason: collision with root package name */
    public final d f3028c = new d();

    public c(Context context, yi.a aVar) {
        this.a = context;
        this.f3027b = aVar;
    }

    public static URL a(String str) {
        try {
            return new URL("https://firebaseinstallations.googleapis.com/v1/" + str);
        } catch (MalformedURLException e9) {
            throw new e(e9.getMessage());
        }
    }

    public static void b(HttpURLConnection httpURLConnection, String str, String str2, String str3) {
        InputStream errorStream = httpURLConnection.getErrorStream();
        String str4 = null;
        if (errorStream != null) {
            BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(errorStream, f3026e));
            try {
                StringBuilder sb2 = new StringBuilder();
                while (true) {
                    String readLine = bufferedReader.readLine();
                    if (readLine == null) {
                        break;
                    }
                    sb2.append(readLine);
                    sb2.append('\n');
                }
                str4 = String.format("Error when communicating with the Firebase Installations server API. HTTP response: [%d %s: %s]", Integer.valueOf(httpURLConnection.getResponseCode()), httpURLConnection.getResponseMessage(), sb2);
            } catch (IOException unused) {
            } catch (Throwable th2) {
                try {
                    bufferedReader.close();
                } catch (IOException unused2) {
                }
                throw th2;
            }
            try {
                bufferedReader.close();
            } catch (IOException unused3) {
            }
        }
        if (TextUtils.isEmpty(str4)) {
            return;
        }
        Log.w("Firebase-Installations", str4);
        Log.w("Firebase-Installations", h.g("Firebase options used while communicating with Firebase server APIs: ", str2, ", ", str3, TextUtils.isEmpty(str) ? "" : a3.e.k(", ", str)));
    }

    public static long d(String str) {
        t.a("Invalid Expiration Timestamp.", f3025d.matcher(str).matches());
        if (str == null || str.length() == 0) {
            return 0L;
        }
        return Long.parseLong(str.substring(0, str.length() - 1));
    }

    public static a e(HttpURLConnection httpURLConnection) {
        InputStream inputStream = httpURLConnection.getInputStream();
        JsonReader jsonReader = new JsonReader(new InputStreamReader(inputStream, f3026e));
        a1.d a = b.a();
        jsonReader.beginObject();
        String str = null;
        String str2 = null;
        String str3 = null;
        b bVar = null;
        while (jsonReader.hasNext()) {
            String nextName = jsonReader.nextName();
            if (nextName.equals(StackTraceHelper.NAME_KEY)) {
                str = jsonReader.nextString();
            } else if (nextName.equals("fid")) {
                str2 = jsonReader.nextString();
            } else if (nextName.equals("refreshToken")) {
                str3 = jsonReader.nextString();
            } else if (nextName.equals("authToken")) {
                jsonReader.beginObject();
                while (jsonReader.hasNext()) {
                    String nextName2 = jsonReader.nextName();
                    if (nextName2.equals("token")) {
                        a.f15i = jsonReader.nextString();
                    } else if (nextName2.equals("expiresIn")) {
                        a.f16v = Long.valueOf(d(jsonReader.nextString()));
                    } else {
                        jsonReader.skipValue();
                    }
                }
                b a10 = a.a();
                jsonReader.endObject();
                bVar = a10;
            } else {
                jsonReader.skipValue();
            }
        }
        jsonReader.endObject();
        jsonReader.close();
        inputStream.close();
        return new a(str, str2, str3, bVar, 1);
    }

    public static b f(HttpURLConnection httpURLConnection) {
        InputStream inputStream = httpURLConnection.getInputStream();
        JsonReader jsonReader = new JsonReader(new InputStreamReader(inputStream, f3026e));
        a1.d a = b.a();
        jsonReader.beginObject();
        while (jsonReader.hasNext()) {
            String nextName = jsonReader.nextName();
            if (nextName.equals("token")) {
                a.f15i = jsonReader.nextString();
            } else if (nextName.equals("expiresIn")) {
                a.f16v = Long.valueOf(d(jsonReader.nextString()));
            } else {
                jsonReader.skipValue();
            }
        }
        jsonReader.endObject();
        jsonReader.close();
        inputStream.close();
        a.f14e = 1;
        return a.a();
    }

    public static void g(HttpURLConnection httpURLConnection, String str, String str2) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("fid", str);
            jSONObject.put("appId", str2);
            jSONObject.put("authVersion", "FIS_v2");
            jSONObject.put("sdkVersion", "a:17.2.0");
            i(httpURLConnection, jSONObject.toString().getBytes("UTF-8"));
        } catch (JSONException e9) {
            throw new IllegalStateException(e9);
        }
    }

    public static void h(HttpURLConnection httpURLConnection) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("sdkVersion", "a:17.2.0");
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put("installation", jSONObject);
            i(httpURLConnection, jSONObject2.toString().getBytes("UTF-8"));
        } catch (JSONException e9) {
            throw new IllegalStateException(e9);
        }
    }

    public static void i(HttpURLConnection httpURLConnection, byte[] bArr) {
        OutputStream outputStream = httpURLConnection.getOutputStream();
        if (outputStream == null) {
            throw new IOException("Cannot send request to FIS servers. No OutputStream available.");
        }
        GZIPOutputStream gZIPOutputStream = new GZIPOutputStream(outputStream);
        try {
            gZIPOutputStream.write(bArr);
        } finally {
            try {
                gZIPOutputStream.close();
                outputStream.close();
            } catch (IOException unused) {
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:23:0x00a9 A[Catch: NameNotFoundException -> 0x00c2, TryCatch #2 {NameNotFoundException -> 0x00c2, blocks: (B:8:0x006a, B:10:0x0082, B:17:0x008c, B:21:0x0099, B:23:0x00a9, B:27:0x00c4, B:29:0x00ce, B:31:0x00e7), top: B:7:0x006a }] */
    /* JADX WARN: Removed duplicated region for block: B:27:0x00c4 A[Catch: NameNotFoundException -> 0x00c2, TryCatch #2 {NameNotFoundException -> 0x00c2, blocks: (B:8:0x006a, B:10:0x0082, B:17:0x008c, B:21:0x0099, B:23:0x00a9, B:27:0x00c4, B:29:0x00ce, B:31:0x00e7), top: B:7:0x006a }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final HttpURLConnection c(URL url, String str) {
        PackageInfo packageInfo;
        Signature[] signatureArr;
        byte[] bArr;
        MessageDigest messageDigest;
        try {
            HttpURLConnection httpURLConnection = (HttpURLConnection) url.openConnection();
            httpURLConnection.setConnectTimeout(10000);
            httpURLConnection.setUseCaches(false);
            httpURLConnection.setReadTimeout(10000);
            httpURLConnection.addRequestProperty("Content-Type", "application/json");
            httpURLConnection.addRequestProperty("Accept", "application/json");
            httpURLConnection.addRequestProperty("Content-Encoding", "gzip");
            httpURLConnection.addRequestProperty("Cache-Control", "no-cache");
            Context context = this.a;
            httpURLConnection.addRequestProperty("X-Android-Package", context.getPackageName());
            wi.e eVar = (wi.e) this.f3027b.get();
            if (eVar != null) {
                try {
                    httpURLConnection.addRequestProperty("x-firebase-client", (String) k0.h(((wi.c) eVar).a()));
                } catch (InterruptedException e9) {
                    Thread.currentThread().interrupt();
                    Log.w("ContentValues", "Failed to get heartbeats header", e9);
                } catch (ExecutionException e10) {
                    Log.w("ContentValues", "Failed to get heartbeats header", e10);
                }
            }
            String str2 = null;
            try {
                packageInfo = jf.c.a(context).a.getPackageManager().getPackageInfo(context.getPackageName(), 64);
                signatureArr = packageInfo.signatures;
            } catch (PackageManager.NameNotFoundException e11) {
                Log.e("ContentValues", "No such package: " + context.getPackageName(), e11);
            }
            if (signatureArr != null && signatureArr.length == 1) {
                int i5 = 0;
                while (true) {
                    if (i5 >= 2) {
                        messageDigest = null;
                        break;
                    }
                    try {
                        messageDigest = MessageDigest.getInstance("SHA1");
                    } catch (NoSuchAlgorithmException unused) {
                    }
                    if (messageDigest != null) {
                        break;
                    }
                    i5++;
                }
                if (messageDigest != null) {
                    bArr = messageDigest.digest(packageInfo.signatures[0].toByteArray());
                    if (bArr != null) {
                        Log.e("ContentValues", "Could not get fingerprint hash for package: " + context.getPackageName());
                    } else {
                        int length = bArr.length;
                        StringBuilder sb2 = new StringBuilder(length + length);
                        for (int i6 = 0; i6 < length; i6++) {
                            char[] cArr = gf.c.a;
                            sb2.append(cArr[(bArr[i6] & 240) >>> 4]);
                            sb2.append(cArr[bArr[i6] & 15]);
                        }
                        str2 = sb2.toString();
                    }
                    httpURLConnection.addRequestProperty("X-Android-Cert", str2);
                    httpURLConnection.addRequestProperty("x-goog-api-key", str);
                    return httpURLConnection;
                }
            }
            bArr = null;
            if (bArr != null) {
            }
            httpURLConnection.addRequestProperty("X-Android-Cert", str2);
            httpURLConnection.addRequestProperty("x-goog-api-key", str);
            return httpURLConnection;
        } catch (IOException unused2) {
            throw new e("Firebase Installations Service is unavailable. Please try again later.");
        }
    }
}
