package io.sentry.cache;

import a5.k0;
import hc.m;
import io.sentry.Hint;
import io.sentry.ILogger;
import io.sentry.SentryLevel;
import io.sentry.android.core.k1;
import io.sentry.c1;
import io.sentry.f6;
import io.sentry.g6;
import io.sentry.h4;
import io.sentry.hints.i;
import io.sentry.hints.j;
import io.sentry.k4;
import io.sentry.o4;
import io.sentry.r;
import io.sentry.r6;
import io.sentry.v4;
import io.sentry.v5;
import java.io.BufferedInputStream;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.ByteArrayInputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.nio.charset.Charset;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Date;
import java.util.Iterator;
import java.util.WeakHashMap;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.TimeUnit;

/* loaded from: classes3.dex */
public class c implements d {
    public static final Charset F = Charset.forName("UTF-8");
    public static final /* synthetic */ int G = 0;
    public final io.sentry.util.a E;

    /* renamed from: d, reason: collision with root package name */
    public final v5 f11431d;

    /* renamed from: e, reason: collision with root package name */
    public final io.sentry.util.e f11432e = new io.sentry.util.e(new m(20, this));

    /* renamed from: i, reason: collision with root package name */
    public final File f11433i;

    /* renamed from: v, reason: collision with root package name */
    public final int f11434v;

    /* renamed from: w, reason: collision with root package name */
    public final CountDownLatch f11435w;

    /* renamed from: x, reason: collision with root package name */
    public final WeakHashMap f11436x;

    /* renamed from: y, reason: collision with root package name */
    public final io.sentry.util.a f11437y;

    public c(v5 v5Var, String str, int i5) {
        d9.a.L(v5Var, "SentryOptions is required.");
        this.f11431d = v5Var;
        this.f11433i = new File(str);
        this.f11434v = i5;
        this.f11436x = new WeakHashMap();
        this.f11437y = new io.sentry.util.a();
        this.E = new io.sentry.util.a();
        this.f11435w = new CountDownLatch(1);
    }

    @Override // io.sentry.cache.d
    public final void U(io.sentry.internal.debugmeta.c cVar) {
        d9.a.L(cVar, "Envelope is required.");
        File b10 = b(cVar);
        boolean delete = b10.delete();
        v5 v5Var = this.f11431d;
        if (delete) {
            v5Var.getLogger().u(SentryLevel.DEBUG, "Discarding envelope from cache: %s", b10.getAbsolutePath());
        } else {
            v5Var.getLogger().u(SentryLevel.DEBUG, "Envelope was not cached or could not be deleted: %s", b10.getAbsolutePath());
        }
    }

    public final File[] a() {
        File file = this.f11433i;
        if (file.isDirectory() && file.canWrite() && file.canRead()) {
            File[] listFiles = file.listFiles(new b());
            if (listFiles != null) {
                return listFiles;
            }
        } else {
            this.f11431d.getLogger().u(SentryLevel.ERROR, "The directory for caching files is inaccessible.: %s", file.getAbsolutePath());
        }
        return new File[0];
    }

    public final File b(io.sentry.internal.debugmeta.c cVar) {
        String str;
        WeakHashMap weakHashMap = this.f11436x;
        r a = this.f11437y.a();
        try {
            if (weakHashMap.containsKey(cVar)) {
                str = (String) weakHashMap.get(cVar);
            } else {
                String concat = nt.a.q().concat(".envelope");
                weakHashMap.put(cVar, concat);
                str = concat;
            }
            File file = new File(this.f11433i.getAbsolutePath(), str);
            a.close();
            return file;
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    public final void d(File file, File file2) {
        r a = this.E.a();
        try {
            if (!file.exists()) {
                a.close();
                return;
            }
            boolean exists = file2.exists();
            v5 v5Var = this.f11431d;
            if (exists) {
                v5Var.getLogger().u(SentryLevel.DEBUG, "Previous session file already exists, deleting it.", new Object[0]);
                if (!file2.delete()) {
                    v5Var.getLogger().u(SentryLevel.WARNING, "Unable to delete previous session file: %s", file2);
                }
            }
            v5Var.getLogger().u(SentryLevel.INFO, "Moving current session to previous session.", new Object[0]);
            try {
                if (!file.renameTo(file2)) {
                    v5Var.getLogger().u(SentryLevel.WARNING, "Unable to move current session to previous session.", new Object[0]);
                }
            } catch (Throwable th2) {
                v5Var.getLogger().k(SentryLevel.ERROR, "Error moving current session to previous session.", th2);
            }
            a.close();
        } catch (Throwable th3) {
            try {
                a.close();
            } catch (Throwable th4) {
                th3.addSuppressed(th4);
            }
            throw th3;
        }
    }

    public final io.sentry.internal.debugmeta.c e(File file) {
        try {
            BufferedInputStream bufferedInputStream = new BufferedInputStream(new FileInputStream(file));
            try {
                io.sentry.internal.debugmeta.c d6 = ((c1) this.f11432e.a()).d(bufferedInputStream);
                bufferedInputStream.close();
                return d6;
            } finally {
            }
        } catch (IOException e9) {
            this.f11431d.getLogger().k(SentryLevel.ERROR, "Failed to deserialize the envelope.", e9);
            return null;
        }
    }

    public final g6 h(o4 o4Var) {
        try {
            BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(new ByteArrayInputStream(o4Var.f()), F));
            try {
                g6 g6Var = (g6) ((c1) this.f11432e.a()).c(bufferedReader, g6.class);
                bufferedReader.close();
                return g6Var;
            } finally {
            }
        } catch (Throwable th2) {
            this.f11431d.getLogger().k(SentryLevel.ERROR, "Failed to deserialize the session.", th2);
            return null;
        }
    }

    public final boolean i() {
        v5 v5Var = this.f11431d;
        try {
            return this.f11435w.await(v5Var.getSessionFlushTimeoutMillis(), TimeUnit.MILLISECONDS);
        } catch (InterruptedException unused) {
            Thread.currentThread().interrupt();
            v5Var.getLogger().u(SentryLevel.DEBUG, "Timed out waiting for previous session to flush.", new Object[0]);
            return false;
        }
    }

    @Override // java.lang.Iterable
    public final Iterator iterator() {
        v5 v5Var = this.f11431d;
        File[] a = a();
        ArrayList arrayList = new ArrayList(a.length);
        for (File file : a) {
            try {
                BufferedInputStream bufferedInputStream = new BufferedInputStream(new FileInputStream(file));
                try {
                    arrayList.add(((c1) this.f11432e.a()).d(bufferedInputStream));
                    bufferedInputStream.close();
                } catch (Throwable th2) {
                    try {
                        bufferedInputStream.close();
                    } catch (Throwable th3) {
                        th2.addSuppressed(th3);
                    }
                    throw th2;
                }
            } catch (FileNotFoundException unused) {
                v5Var.getLogger().u(SentryLevel.DEBUG, "Envelope file '%s' disappeared while converting all cached files to envelopes.", file.getAbsolutePath());
            } catch (IOException e9) {
                v5Var.getLogger().k(SentryLevel.ERROR, "Error while reading cached envelope from file " + file.getAbsolutePath(), e9);
            }
        }
        return arrayList.iterator();
    }

    public final void j(File file, g6 g6Var) {
        String str = g6Var.f11571w;
        v5 v5Var = this.f11431d;
        try {
            FileOutputStream fileOutputStream = new FileOutputStream(file);
            try {
                BufferedWriter bufferedWriter = new BufferedWriter(new OutputStreamWriter(fileOutputStream, F));
                try {
                    v5Var.getLogger().u(SentryLevel.DEBUG, "Overwriting session to offline storage: %s", str);
                    ((c1) this.f11432e.a()).a(g6Var, bufferedWriter);
                    bufferedWriter.close();
                    fileOutputStream.close();
                } finally {
                }
            } finally {
            }
        } catch (Throwable th2) {
            v5Var.getLogger().i(SentryLevel.ERROR, th2, "Error writing Session to offline storage: %s", str);
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:150:0x0398  */
    /* JADX WARN: Removed duplicated region for block: B:166:0x0494  */
    /* JADX WARN: Removed duplicated region for block: B:168:0x04aa  */
    /* JADX WARN: Removed duplicated region for block: B:234:0x0489  */
    /* JADX WARN: Removed duplicated region for block: B:62:0x0220  */
    /* JADX WARN: Removed duplicated region for block: B:65:0x0231 A[SYNTHETIC] */
    /* JADX WARN: Type inference failed for: r15v10 */
    /* JADX WARN: Type inference failed for: r15v2 */
    /* JADX WARN: Type inference failed for: r15v20 */
    /* JADX WARN: Type inference failed for: r15v21 */
    /* JADX WARN: Type inference failed for: r15v23, types: [java.lang.Iterable] */
    /* JADX WARN: Type inference failed for: r15v24 */
    /* JADX WARN: Type inference failed for: r15v25 */
    /* JADX WARN: Type inference failed for: r15v26, types: [io.sentry.f6, java.lang.Object] */
    /* JADX WARN: Type inference failed for: r15v27 */
    /* JADX WARN: Type inference failed for: r15v28, types: [int] */
    /* JADX WARN: Type inference failed for: r15v3 */
    /* JADX WARN: Type inference failed for: r15v30, types: [io.sentry.v4, java.lang.Object] */
    /* JADX WARN: Type inference failed for: r15v31 */
    /* JADX WARN: Type inference failed for: r15v32 */
    /* JADX WARN: Type inference failed for: r15v33 */
    /* JADX WARN: Type inference failed for: r15v34 */
    /* JADX WARN: Type inference failed for: r15v35 */
    /* JADX WARN: Type inference failed for: r15v36 */
    /* JADX WARN: Type inference failed for: r15v37 */
    /* JADX WARN: Type inference failed for: r15v38 */
    /* JADX WARN: Type inference failed for: r15v4 */
    /* JADX WARN: Type inference failed for: r15v42 */
    /* JADX WARN: Type inference failed for: r15v5 */
    /* JADX WARN: Type inference failed for: r15v6 */
    /* JADX WARN: Type inference failed for: r15v7 */
    /* JADX WARN: Type inference failed for: r9v13, types: [io.sentry.f6, java.lang.Object] */
    /* JADX WARN: Type inference failed for: r9v28, types: [io.sentry.v4, java.lang.Object] */
    @Override // io.sentry.cache.d
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public boolean t(io.sentry.internal.debugmeta.c cVar, Hint hint) {
        boolean z5;
        ?? r15;
        Throwable th2;
        boolean z6;
        Date date;
        boolean z7;
        boolean z8;
        File b10;
        boolean z10;
        FileOutputStream fileOutputStream;
        File[] fileArr;
        io.sentry.util.e eVar;
        v5 v5Var;
        g6 g6Var;
        Boolean bool;
        String str;
        int i5;
        o4 o4Var;
        FileOutputStream fileOutputStream2;
        boolean equals;
        g6 h6;
        boolean equals2;
        d9.a.L(cVar, "Envelope is required.");
        File[] a = a();
        int length = a.length;
        io.sentry.util.e eVar2 = this.f11432e;
        boolean z11 = false;
        v5 v5Var2 = this.f11431d;
        int i6 = this.f11434v;
        if (length >= i6) {
            v5Var2.getLogger().u(SentryLevel.WARNING, "Cache folder if full (respecting maxSize). Rotating files", new Object[0]);
            int i10 = (length - i6) + 1;
            if (a.length > 1) {
                Arrays.sort(a, new com.facebook.react.uimanager.a(20));
            }
            File[] fileArr2 = (File[]) Arrays.copyOfRange(a, i10, length);
            int i11 = 0;
            while (i11 < i10) {
                File file = a[i11];
                io.sentry.internal.debugmeta.c e9 = e(file);
                if (e9 != null) {
                    r15 = (Iterable) e9.f11623i;
                    if (r15.iterator().hasNext()) {
                        v5Var2.getClientReportRecorder().j(io.sentry.clientreport.d.CACHE_OVERFLOW, e9);
                        Iterator it = r15.iterator();
                        while (true) {
                            if (!it.hasNext()) {
                                g6Var = null;
                                r15 = r15;
                                break;
                            }
                            o4 o4Var2 = (o4) it.next();
                            if (o4Var2 == null) {
                                equals2 = z11;
                            } else {
                                ?? r92 = o4Var2.a.f11731w;
                                r15 = v4.Session;
                                equals2 = r92.equals(r15);
                            }
                            if (equals2) {
                                g6Var = h(o4Var2);
                                r15 = r15;
                                break;
                            }
                        }
                        if (g6Var != null) {
                            String str2 = g6Var.f11571w;
                            ?? r93 = g6Var.f11573y;
                            r15 = f6.Ok;
                            if (((r93.equals(r15) && str2 != null) ? true : z11) && (bool = g6Var.f11572x) != null && bool.booleanValue()) {
                                int length2 = fileArr2.length;
                                r15 = z11;
                                while (r15 < length2) {
                                    File file2 = fileArr2[r15];
                                    fileArr = a;
                                    io.sentry.internal.debugmeta.c e10 = e(file2);
                                    if (e10 != null) {
                                        Iterable iterable = (Iterable) e10.f11623i;
                                        if (iterable.iterator().hasNext()) {
                                            Iterator it2 = iterable.iterator();
                                            while (true) {
                                                if (!it2.hasNext()) {
                                                    str = str2;
                                                    eVar = eVar2;
                                                    v5Var = v5Var2;
                                                    i5 = length2;
                                                    o4Var = null;
                                                    break;
                                                }
                                                Iterator it3 = it2;
                                                o4 o4Var3 = (o4) it2.next();
                                                if (o4Var3 == null) {
                                                    eVar = eVar2;
                                                    v5Var = v5Var2;
                                                    equals = false;
                                                } else {
                                                    eVar = eVar2;
                                                    v5Var = v5Var2;
                                                    equals = o4Var3.a.f11731w.equals(v4.Session);
                                                }
                                                if (equals && (h6 = h(o4Var3)) != null) {
                                                    String str3 = h6.f11571w;
                                                    i5 = length2;
                                                    if (h6.f11573y.equals(f6.Ok) && str3 != null) {
                                                        Boolean bool2 = h6.f11572x;
                                                        if (bool2 != null && bool2.booleanValue()) {
                                                            v5Var.getLogger().u(SentryLevel.ERROR, "Session %s has 2 times the init flag.", str2);
                                                            r15 = r15;
                                                            break;
                                                        }
                                                        if (str2 == null || !str2.equals(str3)) {
                                                            eVar2 = eVar;
                                                            it2 = it3;
                                                            v5Var2 = v5Var;
                                                            length2 = i5;
                                                            str2 = str2;
                                                        } else {
                                                            h6.f11572x = Boolean.TRUE;
                                                            try {
                                                                o4Var = o4.d((c1) eVar.a(), h6);
                                                            } catch (IOException e11) {
                                                                e = e11;
                                                                o4Var = null;
                                                            }
                                                            try {
                                                                it3.remove();
                                                                str = str2;
                                                                break;
                                                            } catch (IOException e12) {
                                                                e = e12;
                                                                str = str2;
                                                                v5Var.getLogger().i(SentryLevel.ERROR, e, "Failed to create new envelope item for the session %s", str);
                                                                o4Var = o4Var;
                                                                if (o4Var != null) {
                                                                    ArrayList arrayList = new ArrayList();
                                                                    Iterator it4 = iterable.iterator();
                                                                    while (it4.hasNext()) {
                                                                        arrayList.add((o4) it4.next());
                                                                    }
                                                                    arrayList.add(o4Var);
                                                                    io.sentry.internal.debugmeta.c cVar2 = new io.sentry.internal.debugmeta.c((k4) e10.f11622e, arrayList);
                                                                    long lastModified = file2.lastModified();
                                                                    if (!file2.delete()) {
                                                                        v5Var.getLogger().u(SentryLevel.WARNING, "File can't be deleted: %s", file2.getAbsolutePath());
                                                                    }
                                                                    try {
                                                                        fileOutputStream2 = new FileOutputStream(file2);
                                                                    } catch (Throwable th3) {
                                                                        v5Var.getLogger().k(SentryLevel.ERROR, "Failed to serialize the new envelope to the disk.", th3);
                                                                        r15 = r15;
                                                                    }
                                                                    try {
                                                                        ((c1) eVar.a()).e(cVar2, fileOutputStream2);
                                                                        file2.setLastModified(lastModified);
                                                                        fileOutputStream2.close();
                                                                        r15 = r15;
                                                                        if (file.delete()) {
                                                                        }
                                                                        i11++;
                                                                        a = fileArr;
                                                                        eVar2 = eVar;
                                                                        v5Var2 = v5Var;
                                                                        z11 = false;
                                                                    } finally {
                                                                    }
                                                                } else {
                                                                    a = fileArr;
                                                                    eVar2 = eVar;
                                                                    v5Var2 = v5Var;
                                                                    length2 = i5;
                                                                    str2 = str;
                                                                    r15++;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        eVar2 = eVar;
                                                        it2 = it3;
                                                        v5Var2 = v5Var;
                                                        length2 = i5;
                                                    }
                                                } else {
                                                    eVar2 = eVar;
                                                    it2 = it3;
                                                    v5Var2 = v5Var;
                                                }
                                            }
                                        }
                                    }
                                    str = str2;
                                    eVar = eVar2;
                                    v5Var = v5Var2;
                                    i5 = length2;
                                    a = fileArr;
                                    eVar2 = eVar;
                                    v5Var2 = v5Var;
                                    length2 = i5;
                                    str2 = str;
                                    r15++;
                                }
                            }
                        }
                    }
                }
                fileArr = a;
                eVar = eVar2;
                v5Var = v5Var2;
                r15 = r15;
                if (file.delete()) {
                    v5Var.getLogger().u(SentryLevel.WARNING, "File can't be deleted: %s", file.getAbsolutePath());
                }
                i11++;
                a = fileArr;
                eVar2 = eVar;
                v5Var2 = v5Var;
                z11 = false;
            }
        }
        io.sentry.util.e eVar3 = eVar2;
        v5 v5Var3 = v5Var2;
        File file3 = this.f11433i;
        File file4 = new File(file3.getAbsolutePath(), "session.json");
        File file5 = new File(file3.getAbsolutePath(), "previous_session.json");
        if (k0.B(hint, i.class) && !file4.delete()) {
            v5Var3.getLogger().u(SentryLevel.WARNING, "Current envelope doesn't exist.", new Object[0]);
        }
        boolean isInstance = io.sentry.hints.a.class.isInstance(hint.b("sentry:typeCheckHint"));
        Charset charset = F;
        if (isInstance || io.sentry.hints.g.class.isInstance(hint.b("sentry:typeCheckHint"))) {
            Object b11 = hint.b("sentry:typeCheckHint");
            File file6 = new File(file3.getAbsolutePath(), "previous_session.json");
            if (file6.exists()) {
                ILogger logger = v5Var3.getLogger();
                SentryLevel sentryLevel = SentryLevel.WARNING;
                logger.u(sentryLevel, "Previous session is not ended, we'd need to end it.", new Object[0]);
                try {
                    try {
                        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(new FileInputStream(file6), charset));
                        try {
                            g6 g6Var2 = (g6) ((c1) eVar3.a()).c(bufferedReader, g6.class);
                            if (g6Var2 != null) {
                                try {
                                    if (b11 instanceof io.sentry.hints.a) {
                                        try {
                                            io.sentry.hints.a aVar = (io.sentry.hints.a) b11;
                                            Long a10 = aVar.a();
                                            if (a10 != null) {
                                                date = ki.b.s(a10.longValue());
                                                Date c6 = g6Var2.c();
                                                if (c6 != null) {
                                                    if (date.before(c6)) {
                                                    }
                                                }
                                                v5Var3.getLogger().u(sentryLevel, "Abnormal exit happened before previous session start, not ending the session.", new Object[0]);
                                                bufferedReader.close();
                                            } else {
                                                date = null;
                                            }
                                            g6Var2.d(f6.Abnormal, null, true, aVar.c());
                                            z7 = true;
                                        } catch (Throwable th4) {
                                            th2 = th4;
                                            r15 = 1;
                                            try {
                                                bufferedReader.close();
                                                throw th2;
                                            } catch (Throwable th5) {
                                                th2.addSuppressed(th5);
                                                throw th2;
                                            }
                                        }
                                    } else if (b11 instanceof io.sentry.hints.g) {
                                        Date s2 = ki.b.s(((k1) ((io.sentry.hints.g) b11)).f11263v);
                                        Date c8 = g6Var2.c();
                                        if (c8 == null || s2.before(c8)) {
                                            z6 = true;
                                            v5Var3.getLogger().u(sentryLevel, "Native crash exit happened before previous session start, not ending the session.", new Object[0]);
                                        } else {
                                            z7 = true;
                                            g6Var2.d(f6.Crashed, null, true, null);
                                            date = s2;
                                        }
                                    } else {
                                        z7 = true;
                                        date = null;
                                    }
                                    g6Var2.b(date);
                                    j(file6, g6Var2);
                                    z6 = z7;
                                } catch (Throwable th6) {
                                    th = th6;
                                    th2 = th;
                                    r15 = r15;
                                    bufferedReader.close();
                                    throw th2;
                                }
                            } else {
                                z6 = true;
                            }
                            bufferedReader.close();
                            z5 = z6;
                        } catch (Throwable th7) {
                            th = th7;
                            r15 = 1;
                        }
                    } catch (Throwable th8) {
                        th = th8;
                        r15 = 1;
                        v5Var3.getLogger().k(SentryLevel.ERROR, "Error processing previous session.", th);
                        z5 = r15;
                        if (j.class.isInstance(hint.b("sentry:typeCheckHint"))) {
                        }
                        b10 = b(cVar);
                        if (!b10.exists()) {
                        }
                    }
                } catch (Throwable th9) {
                    th = th9;
                    v5Var3.getLogger().k(SentryLevel.ERROR, "Error processing previous session.", th);
                    z5 = r15;
                    if (j.class.isInstance(hint.b("sentry:typeCheckHint"))) {
                    }
                    b10 = b(cVar);
                    if (!b10.exists()) {
                    }
                }
            } else {
                z5 = true;
                v5Var3.getLogger().u(SentryLevel.DEBUG, "No previous session file to end.", new Object[0]);
            }
            if (j.class.isInstance(hint.b("sentry:typeCheckHint"))) {
                z8 = false;
            } else {
                d(file4, file5);
                Iterable iterable2 = (Iterable) cVar.f11623i;
                if (iterable2.iterator().hasNext()) {
                    o4 o4Var4 = (o4) iterable2.iterator().next();
                    v4 v4Var = v4.Session;
                    v4 v4Var2 = o4Var4.a.f11731w;
                    if (v4Var.equals(v4Var2)) {
                        try {
                            BufferedReader bufferedReader2 = new BufferedReader(new InputStreamReader(new ByteArrayInputStream(o4Var4.f()), charset));
                            try {
                                g6 g6Var3 = (g6) ((c1) eVar3.a()).c(bufferedReader2, g6.class);
                                if (g6Var3 == null) {
                                    v5Var3.getLogger().u(SentryLevel.ERROR, "Item of type %s returned null by the parser.", v4Var2);
                                } else {
                                    j(file4, g6Var3);
                                }
                                bufferedReader2.close();
                            } finally {
                            }
                        } catch (Throwable th10) {
                            v5Var3.getLogger().k(SentryLevel.ERROR, "Item failed to process.", th10);
                        }
                    } else {
                        v5Var3.getLogger().u(SentryLevel.INFO, "Current envelope has a different envelope type %s", v4Var2);
                    }
                } else {
                    v5Var3.getLogger().u(SentryLevel.INFO, "Current envelope %s is empty", file4.getAbsolutePath());
                }
                boolean exists = new File(v5Var3.getCacheDirPath(), ".sentry-native/last_crash").exists();
                if (!exists) {
                    File file7 = new File(v5Var3.getCacheDirPath(), "last_crash");
                    if (file7.exists()) {
                        z8 = false;
                        v5Var3.getLogger().u(SentryLevel.INFO, "Crash marker file exists, crashedLastRun will return true.", new Object[0]);
                        if (!file7.delete()) {
                            v5Var3.getLogger().u(SentryLevel.ERROR, "Failed to delete the crash marker file. %s.", file7.getAbsolutePath());
                        }
                        exists = z5;
                        h4.f11586d.a(exists);
                        this.f11435w.countDown();
                    }
                }
                z8 = false;
                h4.f11586d.a(exists);
                this.f11435w.countDown();
            }
            b10 = b(cVar);
            if (!b10.exists()) {
                v5Var3.getLogger().u(SentryLevel.WARNING, "Not adding Envelope to offline storage because it already exists: %s", b10.getAbsolutePath());
                return z5;
            }
            ILogger logger2 = v5Var3.getLogger();
            SentryLevel sentryLevel2 = SentryLevel.DEBUG;
            logger2.u(sentryLevel2, "Adding Envelope to offline storage: %s", b10.getAbsolutePath());
            if (b10.exists()) {
                v5Var3.getLogger().u(sentryLevel2, "Overwriting envelope to offline storage: %s", b10.getAbsolutePath());
                if (!b10.delete()) {
                    v5Var3.getLogger().u(SentryLevel.ERROR, "Failed to delete: %s", b10.getAbsolutePath());
                }
            }
            try {
                fileOutputStream = new FileOutputStream(b10);
            } catch (Throwable th11) {
                v5Var3.getLogger().i(SentryLevel.ERROR, th11, "Error writing Envelope %s to offline storage", b10.getAbsolutePath());
                z10 = z8;
            }
            try {
                ((c1) eVar3.a()).e(cVar, fileOutputStream);
                fileOutputStream.close();
                z10 = z5;
                if (r6.class.isInstance(hint.b("sentry:typeCheckHint"))) {
                    try {
                        FileOutputStream fileOutputStream3 = new FileOutputStream(new File(v5Var3.getCacheDirPath(), "last_crash"));
                        try {
                            fileOutputStream3.write(ki.b.F(ki.b.r()).getBytes(charset));
                            fileOutputStream3.flush();
                            fileOutputStream3.close();
                        } finally {
                        }
                    } catch (Throwable th12) {
                        v5Var3.getLogger().k(SentryLevel.ERROR, "Error writing the crash marker file to the disk", th12);
                    }
                }
                return z10;
            } finally {
                try {
                    fileOutputStream.close();
                    throw th;
                } catch (Throwable th13) {
                    th.addSuppressed(th13);
                }
            }
        }
        z5 = true;
        if (j.class.isInstance(hint.b("sentry:typeCheckHint"))) {
        }
        b10 = b(cVar);
        if (!b10.exists()) {
        }
    }
}
