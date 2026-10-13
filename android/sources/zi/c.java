package zi;

import a5.k0;
import android.net.TrafficStats;
import android.text.TextUtils;
import android.util.Log;
import bf.t;
import e4.l;
import e4.r;
import java.io.IOException;
import java.net.HttpURLConnection;
import java.net.URL;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.Iterator;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicInteger;
import java.util.regex.Pattern;
import ni.m;
import org.json.JSONException;
import org.json.JSONObject;

/* loaded from: classes3.dex */
public final class c implements d {

    /* renamed from: m, reason: collision with root package name */
    public static final Object f21253m = new Object();
    public final ki.g a;

    /* renamed from: b, reason: collision with root package name */
    public final bj.c f21254b;

    /* renamed from: c, reason: collision with root package name */
    public final l f21255c;

    /* renamed from: d, reason: collision with root package name */
    public final j f21256d;

    /* renamed from: e, reason: collision with root package name */
    public final m f21257e;

    /* renamed from: f, reason: collision with root package name */
    public final h f21258f;

    /* renamed from: g, reason: collision with root package name */
    public final Object f21259g;

    /* renamed from: h, reason: collision with root package name */
    public final ExecutorService f21260h;

    /* renamed from: i, reason: collision with root package name */
    public final oi.h f21261i;
    public String j;
    public final HashSet k;

    /* renamed from: l, reason: collision with root package name */
    public final ArrayList f21262l;

    static {
        new AtomicInteger(1);
    }

    public c(ki.g gVar, yi.a aVar, ExecutorService executorService, oi.h hVar) {
        gVar.a();
        bj.c cVar = new bj.c(gVar.a, aVar);
        l lVar = new l(gVar);
        if (wi.d.f19837e == null) {
            wi.d.f19837e = new wi.d(3);
        }
        wi.d dVar = wi.d.f19837e;
        if (j.f21267d == null) {
            j.f21267d = new j(dVar);
        }
        j jVar = j.f21267d;
        m mVar = new m(new ni.d(2, gVar));
        h hVar2 = new h();
        this.f21259g = new Object();
        this.k = new HashSet();
        this.f21262l = new ArrayList();
        this.a = gVar;
        this.f21254b = cVar;
        this.f21255c = lVar;
        this.f21256d = jVar;
        this.f21257e = mVar;
        this.f21258f = hVar2;
        this.f21260h = executorService;
        this.f21261i = hVar;
    }

    /* JADX WARN: Code restructure failed: missing block: B:12:0x0020, code lost:
    
        r3 = f(r2);
        r4 = r6.f21255c;
        r2 = r2.a();
        r2.f634b = r3;
        r2.f635c = 3;
        r2 = r2.j();
        r4.D(r2);
     */
    /* JADX WARN: Finally extract failed */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void a() {
        aj.b I;
        synchronized (f21253m) {
            try {
                ki.g gVar = this.a;
                gVar.a();
                r d6 = r.d(gVar.a);
                try {
                    I = this.f21255c.I();
                    int i5 = I.f641b;
                    boolean z5 = true;
                    if (i5 != 2 && i5 != 1) {
                        z5 = false;
                    }
                    if (d6 != null) {
                        d6.u();
                    }
                } catch (Throwable th2) {
                    if (d6 != null) {
                        d6.u();
                    }
                    throw th2;
                }
            } catch (Throwable th3) {
                throw th3;
            }
        }
        i(I);
        this.f21261i.execute(new b(this, 1));
    }

    public final aj.b b(aj.b bVar) {
        int responseCode;
        bj.b f2;
        bj.c cVar = this.f21254b;
        ki.g gVar = this.a;
        gVar.a();
        String str = gVar.f13383c.a;
        String str2 = bVar.a;
        ki.g gVar2 = this.a;
        gVar2.a();
        String str3 = gVar2.f13383c.f13400g;
        String str4 = bVar.f643d;
        bj.d dVar = cVar.f3028c;
        if (!dVar.a()) {
            throw new e("Firebase Installations Service is unavailable. Please try again later.");
        }
        URL a = bj.c.a("projects/" + str3 + "/installations/" + str2 + "/authTokens:generate");
        for (int i5 = 0; i5 <= 1; i5++) {
            TrafficStats.setThreadStatsTag(32771);
            HttpURLConnection c6 = cVar.c(a, str);
            try {
                try {
                    c6.setRequestMethod("POST");
                    c6.addRequestProperty("Authorization", "FIS_v2 " + str4);
                    c6.setDoOutput(true);
                    bj.c.h(c6);
                    responseCode = c6.getResponseCode();
                    dVar.b(responseCode);
                } finally {
                    c6.disconnect();
                    TrafficStats.clearThreadStatsTag();
                }
            } catch (IOException | AssertionError unused) {
            }
            if (responseCode >= 200 && responseCode < 300) {
                f2 = bj.c.f(c6);
            } else {
                bj.c.b(c6, null, str, str3);
                if (responseCode == 401 || responseCode == 404) {
                    a1.d a10 = bj.b.a();
                    a10.f14e = 3;
                    f2 = a10.a();
                } else {
                    if (responseCode == 429) {
                        throw new e("Firebase servers have received too many requests from this client in a short period of time. Please try again later.");
                    }
                    if (responseCode < 500 || responseCode >= 600) {
                        Log.e("Firebase-Installations", "Firebase Installations can not communicate with Firebase server APIs due to invalid configuration. Please update your Firebase initialization process and set valid Firebase options (API key, Project ID, Application ID) when initializing Firebase.");
                        a1.d a11 = bj.b.a();
                        a11.f14e = 2;
                        f2 = a11.a();
                    }
                }
            }
            int b10 = f0.e.b(f2.f3024c);
            if (b10 != 0) {
                if (b10 == 1) {
                    aj.a a12 = bVar.a();
                    a12.f638f = "BAD CONFIG";
                    a12.f635c = 5;
                    return a12.j();
                }
                if (b10 != 2) {
                    throw new e("Firebase Installations Service is unavailable. Please try again later.");
                }
                synchronized (this) {
                    this.j = null;
                }
                aj.a a13 = bVar.a();
                a13.f635c = 2;
                return a13.j();
            }
            String str5 = f2.a;
            long j = f2.f3023b;
            j jVar = this.f21256d;
            jVar.getClass();
            TimeUnit timeUnit = TimeUnit.MILLISECONDS;
            jVar.a.getClass();
            long seconds = timeUnit.toSeconds(System.currentTimeMillis());
            aj.a a14 = bVar.a();
            a14.f636d = str5;
            a14.f639g = Long.valueOf(j);
            a14.f640h = Long.valueOf(seconds);
            return a14.j();
        }
        throw new e("Firebase Installations Service is unavailable. Please try again later.");
    }

    public final jg.l c() {
        String str;
        e();
        synchronized (this) {
            str = this.j;
        }
        if (str != null) {
            return k0.s(str);
        }
        jg.g gVar = new jg.g();
        g gVar2 = new g(gVar);
        synchronized (this.f21259g) {
            this.f21262l.add(gVar2);
        }
        jg.l lVar = gVar.a;
        this.f21260h.execute(new b(this, 0));
        return lVar;
    }

    public final jg.l d() {
        e();
        jg.g gVar = new jg.g();
        f fVar = new f(this.f21256d, gVar);
        synchronized (this.f21259g) {
            this.f21262l.add(fVar);
        }
        jg.l lVar = gVar.a;
        this.f21260h.execute(new b(this, 2));
        return lVar;
    }

    public final void e() {
        ki.g gVar = this.a;
        gVar.a();
        t.e(gVar.f13383c.f13395b, "Please set your Application ID. A valid Firebase App ID is required to communicate with Firebase server APIs: It identifies your application with Firebase.Please refer to https://firebase.google.com/support/privacy/init-options.");
        gVar.a();
        t.e(gVar.f13383c.f13400g, "Please set your Project ID. A valid Firebase Project ID is required to communicate with Firebase server APIs: It identifies your application with Firebase.Please refer to https://firebase.google.com/support/privacy/init-options.");
        gVar.a();
        t.e(gVar.f13383c.a, "Please set a valid API key. A Firebase API key is required to communicate with Firebase server APIs: It authenticates your project with Google.Please refer to https://firebase.google.com/support/privacy/init-options.");
        gVar.a();
        String str = gVar.f13383c.f13395b;
        Pattern pattern = j.f21266c;
        t.a("Please set your Application ID. A valid Firebase App ID is required to communicate with Firebase server APIs: It identifies your application with Firebase.Please refer to https://firebase.google.com/support/privacy/init-options.", str.contains(":"));
        gVar.a();
        t.a("Please set a valid API key. A Firebase API key is required to communicate with Firebase server APIs: It authenticates your project with Google.Please refer to https://firebase.google.com/support/privacy/init-options.", j.f21266c.matcher(gVar.f13383c.a).matches());
    }

    /* JADX WARN: Code restructure failed: missing block: B:4:0x001c, code lost:
    
        if ("[DEFAULT]".equals(r0.f13382b) != false) goto L6;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final String f(aj.b bVar) {
        String string;
        ki.g gVar = this.a;
        gVar.a();
        if (!gVar.f13382b.equals("CHIME_ANDROID_SDK")) {
            ki.g gVar2 = this.a;
            gVar2.a();
        }
        if (bVar.f641b == 1) {
            aj.c cVar = (aj.c) this.f21257e.get();
            synchronized (cVar.a) {
                try {
                    synchronized (cVar.a) {
                        string = cVar.a.getString("|S|id", null);
                    }
                    if (string == null) {
                        string = cVar.a();
                    }
                } finally {
                }
            }
            if (!TextUtils.isEmpty(string)) {
                return string;
            }
            this.f21258f.getClass();
            return h.a();
        }
        this.f21258f.getClass();
        return h.a();
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r2v2, types: [bj.c] */
    /* JADX WARN: Type inference failed for: r2v22 */
    /* JADX WARN: Type inference failed for: r2v23 */
    /* JADX WARN: Type inference failed for: r2v24 */
    /* JADX WARN: Type inference failed for: r2v3 */
    /* JADX WARN: Type inference failed for: r2v4 */
    /* JADX WARN: Type inference failed for: r2v6 */
    /* JADX WARN: Type inference failed for: r2v7, types: [bj.a] */
    public final aj.b g(aj.b bVar) {
        int responseCode;
        String str = bVar.a;
        String str2 = null;
        if (str != null && str.length() == 11) {
            aj.c cVar = (aj.c) this.f21257e.get();
            synchronized (cVar.a) {
                try {
                    String[] strArr = aj.c.f647c;
                    int i5 = 0;
                    while (true) {
                        if (i5 < 4) {
                            String str3 = strArr[i5];
                            String string = cVar.a.getString("|T|" + cVar.f648b + "|" + str3, null);
                            if (string == null || string.isEmpty()) {
                                i5++;
                            } else if (string.startsWith("{")) {
                                try {
                                    str2 = new JSONObject(string).getString("token");
                                } catch (JSONException unused) {
                                }
                            } else {
                                str2 = string;
                            }
                        }
                    }
                } finally {
                }
            }
        }
        bj.c cVar2 = this.f21254b;
        ki.g gVar = this.a;
        gVar.a();
        String str4 = gVar.f13383c.a;
        String str5 = bVar.a;
        ki.g gVar2 = this.a;
        gVar2.a();
        String str6 = gVar2.f13383c.f13400g;
        ki.g gVar3 = this.a;
        gVar3.a();
        String str7 = gVar3.f13383c.f13395b;
        bj.d dVar = cVar2.f3028c;
        if (!dVar.a()) {
            throw new e("Firebase Installations Service is unavailable. Please try again later.");
        }
        URL a = bj.c.a("projects/" + str6 + "/installations");
        int i6 = 0;
        bj.a aVar = cVar2;
        while (i6 <= 1) {
            TrafficStats.setThreadStatsTag(32769);
            HttpURLConnection c6 = aVar.c(a, str4);
            try {
                try {
                    c6.setRequestMethod("POST");
                    c6.setDoOutput(true);
                    if (str2 != null) {
                        c6.addRequestProperty("x-goog-fis-android-iid-migration-auth", str2);
                    }
                    bj.c.g(c6, str5, str7);
                    responseCode = c6.getResponseCode();
                    dVar.b(responseCode);
                } catch (IOException | AssertionError unused2) {
                }
                if (responseCode >= 200 && responseCode < 300) {
                    bj.a e9 = bj.c.e(c6);
                    c6.disconnect();
                    TrafficStats.clearThreadStatsTag();
                    aVar = e9;
                } else {
                    try {
                        bj.c.b(c6, str7, str4, str6);
                    } catch (IOException | AssertionError unused3) {
                        c6.disconnect();
                        TrafficStats.clearThreadStatsTag();
                        i6++;
                        aVar = aVar;
                    }
                    if (responseCode == 429) {
                        throw new e("Firebase servers have received too many requests from this client in a short period of time. Please try again later.");
                    }
                    if (responseCode < 500 || responseCode >= 600) {
                        Log.e("Firebase-Installations", "Firebase Installations can not communicate with Firebase server APIs due to invalid configuration. Please update your Firebase initialization process and set valid Firebase options (API key, Project ID, Application ID) when initializing Firebase.");
                        bj.a aVar2 = new bj.a(null, null, null, null, 2);
                        c6.disconnect();
                        TrafficStats.clearThreadStatsTag();
                        aVar = aVar2;
                    } else {
                        c6.disconnect();
                        TrafficStats.clearThreadStatsTag();
                        i6++;
                        aVar = aVar;
                    }
                }
                int b10 = f0.e.b(aVar.f3022e);
                if (b10 != 0) {
                    if (b10 != 1) {
                        throw new e("Firebase Installations Service is unavailable. Please try again later.");
                    }
                    aj.a a10 = bVar.a();
                    a10.f638f = "BAD CONFIG";
                    a10.f635c = 5;
                    return a10.j();
                }
                String str8 = aVar.f3019b;
                String str9 = aVar.f3020c;
                j jVar = this.f21256d;
                jVar.getClass();
                TimeUnit timeUnit = TimeUnit.MILLISECONDS;
                jVar.a.getClass();
                long seconds = timeUnit.toSeconds(System.currentTimeMillis());
                bj.b bVar2 = aVar.f3021d;
                String str10 = bVar2.a;
                long j = bVar2.f3023b;
                aj.a a11 = bVar.a();
                a11.f634b = str8;
                a11.f635c = 4;
                a11.f636d = str10;
                a11.f637e = str9;
                a11.f639g = Long.valueOf(j);
                a11.f640h = Long.valueOf(seconds);
                return a11.j();
            } finally {
                c6.disconnect();
                TrafficStats.clearThreadStatsTag();
            }
        }
        throw new e("Firebase Installations Service is unavailable. Please try again later.");
    }

    public final void h(Exception exc) {
        synchronized (this.f21259g) {
            try {
                Iterator it = this.f21262l.iterator();
                while (it.hasNext()) {
                    if (((i) it.next()).a(exc)) {
                        it.remove();
                    }
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public final void i(aj.b bVar) {
        synchronized (this.f21259g) {
            try {
                Iterator it = this.f21262l.iterator();
                while (it.hasNext()) {
                    if (((i) it.next()).b(bVar)) {
                        it.remove();
                    }
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }
}
