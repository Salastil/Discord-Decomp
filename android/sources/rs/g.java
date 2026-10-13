package rs;

import androidx.fragment.app.s;
import et.q;
import et.r;
import et.y;
import java.io.Closeable;
import java.io.EOFException;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.Flushable;
import java.io.IOException;
import java.util.Collection;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.logging.Logger;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.LongCompanionObject;
import kotlin.text.Regex;
import kotlin.text.StringsKt;
import kotlin.text.x;
import ys.n;

/* loaded from: classes3.dex */
public final class g implements Closeable, Flushable {
    public static final Regex P = new Regex("[a-z0-9_-]{1,120}");
    public static final String Q = "CLEAN";
    public static final String R = "DIRTY";
    public static final String S = "REMOVE";
    public static final String T = "READ";
    public final LinkedHashMap E;
    public int F;
    public boolean G;
    public boolean H;
    public boolean I;
    public boolean J;
    public boolean K;
    public boolean L;
    public long M;
    public final ss.b N;
    public final f O;

    /* renamed from: d, reason: collision with root package name */
    public final File f17651d;

    /* renamed from: e, reason: collision with root package name */
    public final long f17652e;

    /* renamed from: i, reason: collision with root package name */
    public final File f17653i;

    /* renamed from: v, reason: collision with root package name */
    public final File f17654v;

    /* renamed from: w, reason: collision with root package name */
    public final File f17655w;

    /* renamed from: x, reason: collision with root package name */
    public long f17656x;

    /* renamed from: y, reason: collision with root package name */
    public q f17657y;

    public g(File directory, long j, ss.c taskRunner) {
        xs.a fileSystem = xs.a.a;
        Intrinsics.checkNotNullParameter(fileSystem, "fileSystem");
        Intrinsics.checkNotNullParameter(directory, "directory");
        Intrinsics.checkNotNullParameter(taskRunner, "taskRunner");
        this.f17651d = directory;
        this.f17652e = j;
        this.E = new LinkedHashMap(0, 0.75f, true);
        this.N = taskRunner.e();
        this.O = new f(this, Intrinsics.stringPlus(qs.b.f17056g, " Cache"), 0);
        if (j <= 0) {
            throw new IllegalArgumentException("maxSize <= 0");
        }
        this.f17653i = new File(directory, "journal");
        this.f17654v = new File(directory, "journal.tmp");
        this.f17655w = new File(directory, "journal.bkp");
    }

    public static void Q(String str) {
        if (!P.d(str)) {
            throw new IllegalArgumentException(k0.d.h('\"', "keys must match regex [a-z0-9_-]{1,120}: \"", str).toString());
        }
    }

    public final synchronized void A() {
        et.b k;
        try {
            q qVar = this.f17657y;
            if (qVar != null) {
                qVar.close();
            }
            File file = this.f17654v;
            Intrinsics.checkNotNullParameter(file, "file");
            try {
                k = y.k(file);
            } catch (FileNotFoundException unused) {
                file.getParentFile().mkdirs();
                k = y.k(file);
            }
            q writer = y.c(k);
            try {
                writer.B("libcore.io.DiskLruCache");
                writer.writeByte(10);
                writer.B("1");
                writer.writeByte(10);
                writer.f0(201105);
                writer.writeByte(10);
                writer.f0(2);
                writer.writeByte(10);
                writer.writeByte(10);
                Iterator it = this.E.values().iterator();
                while (true) {
                    int i5 = 0;
                    if (!it.hasNext()) {
                        break;
                    }
                    d dVar = (d) it.next();
                    if (dVar.f17642g != null) {
                        writer.B(R);
                        writer.writeByte(32);
                        writer.B(dVar.a);
                        writer.writeByte(10);
                    } else {
                        writer.B(Q);
                        writer.writeByte(32);
                        writer.B(dVar.a);
                        Intrinsics.checkNotNullParameter(writer, "writer");
                        long[] jArr = dVar.f17637b;
                        int length = jArr.length;
                        while (i5 < length) {
                            long j = jArr[i5];
                            i5++;
                            writer.writeByte(32);
                            writer.f0(j);
                        }
                        writer.writeByte(10);
                    }
                }
                Unit unit = Unit.a;
                writer.close();
                xs.a aVar = xs.a.a;
                if (aVar.c(this.f17653i)) {
                    aVar.d(this.f17653i, this.f17655w);
                }
                aVar.d(this.f17654v, this.f17653i);
                aVar.a(this.f17655w);
                this.f17657y = q();
                this.G = false;
                this.L = false;
            } finally {
            }
        } catch (Throwable th2) {
            throw th2;
        }
    }

    public final void C(d entry) {
        q qVar;
        String str = entry.a;
        Intrinsics.checkNotNullParameter(entry, "entry");
        if (!this.H) {
            if (entry.f17643h > 0 && (qVar = this.f17657y) != null) {
                qVar.B(R);
                qVar.writeByte(32);
                qVar.B(str);
                qVar.writeByte(10);
                qVar.flush();
            }
            if (entry.f17643h > 0 || entry.f17642g != null) {
                entry.f17641f = true;
                return;
            }
        }
        a3.f fVar = entry.f17642g;
        if (fVar != null) {
            fVar.g();
        }
        int i5 = 0;
        while (i5 < 2) {
            int i6 = i5 + 1;
            File file = (File) entry.f17638c.get(i5);
            Intrinsics.checkNotNullParameter(file, "file");
            if (!file.delete() && file.exists()) {
                throw new IOException(Intrinsics.stringPlus("failed to delete ", file));
            }
            long j = this.f17656x;
            long[] jArr = entry.f17637b;
            this.f17656x = j - jArr[i5];
            jArr[i5] = 0;
            i5 = i6;
        }
        this.F++;
        q qVar2 = this.f17657y;
        if (qVar2 != null) {
            qVar2.B(S);
            qVar2.writeByte(32);
            qVar2.B(str);
            qVar2.writeByte(10);
        }
        this.E.remove(str);
        if (o()) {
            this.N.c(this.O, 0L);
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:9:0x0022, code lost:
    
        kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, "toEvict");
        C(r1);
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void P() {
        while (this.f17656x > this.f17652e) {
            for (d toEvict : this.E.values()) {
                if (!toEvict.f17641f) {
                    break;
                }
            }
            return;
        }
        this.K = false;
    }

    public final synchronized void c() {
        if (this.J) {
            throw new IllegalStateException("cache is closed");
        }
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final synchronized void close() {
        try {
            if (this.I && !this.J) {
                Collection values = this.E.values();
                Intrinsics.checkNotNullExpressionValue(values, "lruEntries.values");
                int i5 = 0;
                Object[] array = values.toArray(new d[0]);
                if (array == null) {
                    throw new NullPointerException("null cannot be cast to non-null type kotlin.Array<T of kotlin.collections.ArraysKt__ArraysJVMKt.toTypedArray>");
                }
                d[] dVarArr = (d[]) array;
                int length = dVarArr.length;
                while (i5 < length) {
                    d dVar = dVarArr[i5];
                    i5++;
                    a3.f fVar = dVar.f17642g;
                    if (fVar != null) {
                        fVar.g();
                    }
                }
                P();
                q qVar = this.f17657y;
                Intrinsics.checkNotNull(qVar);
                qVar.close();
                this.f17657y = null;
                this.J = true;
                return;
            }
            this.J = true;
        } catch (Throwable th2) {
            throw th2;
        }
    }

    public final synchronized void f(a3.f editor, boolean z5) {
        Intrinsics.checkNotNullParameter(editor, "editor");
        d dVar = (d) editor.f56b;
        if (!Intrinsics.areEqual(dVar.f17642g, editor)) {
            throw new IllegalStateException("Check failed.");
        }
        int i5 = 0;
        if (z5 && !dVar.f17640e) {
            int i6 = 0;
            while (i6 < 2) {
                int i10 = i6 + 1;
                boolean[] zArr = (boolean[]) editor.f57c;
                Intrinsics.checkNotNull(zArr);
                if (!zArr[i6]) {
                    editor.a();
                    throw new IllegalStateException(Intrinsics.stringPlus("Newly created entry didn't create value for index ", Integer.valueOf(i6)));
                }
                File file = (File) dVar.f17639d.get(i6);
                Intrinsics.checkNotNullParameter(file, "file");
                if (!file.exists()) {
                    editor.a();
                    return;
                }
                i6 = i10;
            }
        }
        int i11 = 0;
        while (i11 < 2) {
            int i12 = i11 + 1;
            File file2 = (File) dVar.f17639d.get(i11);
            if (!z5 || dVar.f17641f) {
                Intrinsics.checkNotNullParameter(file2, "file");
                if (!file2.delete() && file2.exists()) {
                    throw new IOException(Intrinsics.stringPlus("failed to delete ", file2));
                }
            } else {
                xs.a aVar = xs.a.a;
                if (aVar.c(file2)) {
                    File file3 = (File) dVar.f17638c.get(i11);
                    aVar.d(file2, file3);
                    long j = dVar.f17637b[i11];
                    Intrinsics.checkNotNullParameter(file3, "file");
                    long length = file3.length();
                    dVar.f17637b[i11] = length;
                    this.f17656x = (this.f17656x - j) + length;
                }
            }
            i11 = i12;
        }
        dVar.f17642g = null;
        if (dVar.f17641f) {
            C(dVar);
            return;
        }
        this.F++;
        q writer = this.f17657y;
        Intrinsics.checkNotNull(writer);
        if (!dVar.f17640e && !z5) {
            this.E.remove(dVar.a);
            writer.B(S);
            writer.writeByte(32);
            writer.B(dVar.a);
            writer.writeByte(10);
            writer.flush();
            if (this.f17656x <= this.f17652e || o()) {
                this.N.c(this.O, 0L);
            }
        }
        dVar.f17640e = true;
        writer.B(Q);
        writer.writeByte(32);
        writer.B(dVar.a);
        Intrinsics.checkNotNullParameter(writer, "writer");
        long[] jArr = dVar.f17637b;
        int length2 = jArr.length;
        while (i5 < length2) {
            long j5 = jArr[i5];
            i5++;
            writer.writeByte(32);
            writer.f0(j5);
        }
        writer.writeByte(10);
        if (z5) {
            long j7 = this.M;
            this.M = 1 + j7;
            dVar.f17644i = j7;
        }
        writer.flush();
        if (this.f17656x <= this.f17652e) {
        }
        this.N.c(this.O, 0L);
    }

    @Override // java.io.Flushable
    public final synchronized void flush() {
        if (this.I) {
            c();
            P();
            q qVar = this.f17657y;
            Intrinsics.checkNotNull(qVar);
            qVar.flush();
        }
    }

    public final synchronized a3.f g(long j, String key) {
        Intrinsics.checkNotNullParameter(key, "key");
        l();
        c();
        Q(key);
        d dVar = (d) this.E.get(key);
        if (j != -1 && (dVar == null || dVar.f17644i != j)) {
            return null;
        }
        if ((dVar == null ? null : dVar.f17642g) != null) {
            return null;
        }
        if (dVar != null && dVar.f17643h != 0) {
            return null;
        }
        if (!this.K && !this.L) {
            q qVar = this.f17657y;
            Intrinsics.checkNotNull(qVar);
            qVar.B(R);
            qVar.writeByte(32);
            qVar.B(key);
            qVar.writeByte(10);
            qVar.flush();
            if (this.G) {
                return null;
            }
            if (dVar == null) {
                dVar = new d(this, key);
                this.E.put(key, dVar);
            }
            a3.f fVar = new a3.f(this, dVar);
            dVar.f17642g = fVar;
            return fVar;
        }
        this.N.c(this.O, 0L);
        return null;
    }

    public final synchronized e i(String key) {
        Intrinsics.checkNotNullParameter(key, "key");
        l();
        c();
        Q(key);
        d dVar = (d) this.E.get(key);
        if (dVar == null) {
            return null;
        }
        e a = dVar.a();
        if (a == null) {
            return null;
        }
        this.F++;
        q qVar = this.f17657y;
        Intrinsics.checkNotNull(qVar);
        qVar.B(T);
        qVar.writeByte(32);
        qVar.B(key);
        qVar.writeByte(10);
        if (o()) {
            this.N.c(this.O, 0L);
        }
        return a;
    }

    public final synchronized void l() {
        et.b k;
        boolean z5;
        try {
            byte[] bArr = qs.b.a;
            if (this.I) {
                return;
            }
            xs.a aVar = xs.a.a;
            if (aVar.c(this.f17655w)) {
                if (aVar.c(this.f17653i)) {
                    aVar.a(this.f17655w);
                } else {
                    aVar.d(this.f17655w, this.f17653i);
                }
            }
            File file = this.f17655w;
            Intrinsics.checkNotNullParameter(aVar, "<this>");
            Intrinsics.checkNotNullParameter(file, "file");
            aVar.getClass();
            Intrinsics.checkNotNullParameter(file, "file");
            try {
                k = y.k(file);
            } catch (FileNotFoundException unused) {
                file.getParentFile().mkdirs();
                k = y.k(file);
            }
            try {
                try {
                    aVar.a(file);
                    k.close();
                    z5 = true;
                } finally {
                }
            } catch (IOException unused2) {
                Unit unit = Unit.a;
                k.close();
                aVar.a(file);
                z5 = false;
            }
            this.H = z5;
            File file2 = this.f17653i;
            Intrinsics.checkNotNullParameter(file2, "file");
            if (file2.exists()) {
                try {
                    t();
                    r();
                    this.I = true;
                    return;
                } catch (IOException e9) {
                    n nVar = n.a;
                    n nVar2 = n.a;
                    String str = "DiskLruCache " + this.f17651d + " is corrupt: " + ((Object) e9.getMessage()) + ", removing";
                    nVar2.getClass();
                    n.i(5, str, e9);
                    try {
                        close();
                        xs.a.a.b(this.f17651d);
                        this.J = false;
                    } catch (Throwable th2) {
                        this.J = false;
                        throw th2;
                    }
                }
            }
            A();
            this.I = true;
        } catch (Throwable th3) {
            throw th3;
        }
    }

    public final boolean o() {
        int i5 = this.F;
        return i5 >= 2000 && i5 >= this.E.size();
    }

    public final q q() {
        et.b i5;
        File file = this.f17653i;
        Intrinsics.checkNotNullParameter(file, "file");
        try {
            Logger logger = et.n.a;
            Intrinsics.checkNotNullParameter(file, "<this>");
            i5 = y.i(new FileOutputStream(file, true));
        } catch (FileNotFoundException unused) {
            file.getParentFile().mkdirs();
            Logger logger2 = et.n.a;
            Intrinsics.checkNotNullParameter(file, "<this>");
            i5 = y.i(new FileOutputStream(file, true));
        }
        return y.c(new h(i5, new s(4, this)));
    }

    public final void r() {
        File file = this.f17654v;
        xs.a aVar = xs.a.a;
        aVar.a(file);
        Iterator it = this.E.values().iterator();
        while (it.hasNext()) {
            Object next = it.next();
            Intrinsics.checkNotNullExpressionValue(next, "i.next()");
            d dVar = (d) next;
            int i5 = 0;
            if (dVar.f17642g == null) {
                while (i5 < 2) {
                    this.f17656x += dVar.f17637b[i5];
                    i5++;
                }
            } else {
                dVar.f17642g = null;
                while (i5 < 2) {
                    aVar.a((File) dVar.f17638c.get(i5));
                    aVar.a((File) dVar.f17639d.get(i5));
                    i5++;
                }
                it.remove();
            }
        }
    }

    public final void t() {
        File file = this.f17653i;
        Intrinsics.checkNotNullParameter(file, "file");
        r d6 = y.d(y.l(file));
        try {
            String y5 = d6.y(LongCompanionObject.MAX_VALUE);
            String y6 = d6.y(LongCompanionObject.MAX_VALUE);
            String y10 = d6.y(LongCompanionObject.MAX_VALUE);
            String y11 = d6.y(LongCompanionObject.MAX_VALUE);
            String y12 = d6.y(LongCompanionObject.MAX_VALUE);
            if (!Intrinsics.areEqual("libcore.io.DiskLruCache", y5) || !Intrinsics.areEqual("1", y6) || !Intrinsics.areEqual(String.valueOf(201105), y10) || !Intrinsics.areEqual(String.valueOf(2), y11) || y12.length() > 0) {
                throw new IOException("unexpected journal header: [" + y5 + ", " + y6 + ", " + y11 + ", " + y12 + ']');
            }
            int i5 = 0;
            while (true) {
                try {
                    x(d6.y(LongCompanionObject.MAX_VALUE));
                    i5++;
                } catch (EOFException unused) {
                    this.F = i5 - this.E.size();
                    if (d6.c()) {
                        this.f17657y = q();
                    } else {
                        A();
                    }
                    Unit unit = Unit.a;
                    d6.close();
                    return;
                }
            }
        } finally {
        }
    }

    public final void x(String str) {
        String substring;
        int i5 = 0;
        int I = StringsKt.I(str, ' ', 0, 6);
        if (I == -1) {
            throw new IOException(Intrinsics.stringPlus("unexpected journal line: ", str));
        }
        int i6 = I + 1;
        int I2 = StringsKt.I(str, ' ', i6, 4);
        LinkedHashMap linkedHashMap = this.E;
        if (I2 == -1) {
            substring = str.substring(i6);
            Intrinsics.checkNotNullExpressionValue(substring, "this as java.lang.String).substring(startIndex)");
            String str2 = S;
            if (I == str2.length() && x.o(str, str2, false)) {
                linkedHashMap.remove(substring);
                return;
            }
        } else {
            substring = str.substring(i6, I2);
            Intrinsics.checkNotNullExpressionValue(substring, "this as java.lang.String…ing(startIndex, endIndex)");
        }
        d dVar = (d) linkedHashMap.get(substring);
        if (dVar == null) {
            dVar = new d(this, substring);
            linkedHashMap.put(substring, dVar);
        }
        if (I2 != -1) {
            String str3 = Q;
            if (I == str3.length() && x.o(str, str3, false)) {
                String substring2 = str.substring(I2 + 1);
                Intrinsics.checkNotNullExpressionValue(substring2, "this as java.lang.String).substring(startIndex)");
                List strings = StringsKt.S(substring2, new char[]{' '});
                dVar.f17640e = true;
                dVar.f17642g = null;
                Intrinsics.checkNotNullParameter(strings, "strings");
                int size = strings.size();
                dVar.j.getClass();
                if (size != 2) {
                    throw new IOException(Intrinsics.stringPlus("unexpected journal line: ", strings));
                }
                try {
                    int size2 = strings.size();
                    while (i5 < size2) {
                        int i10 = i5 + 1;
                        dVar.f17637b[i5] = Long.parseLong((String) strings.get(i5));
                        i5 = i10;
                    }
                    return;
                } catch (NumberFormatException unused) {
                    throw new IOException(Intrinsics.stringPlus("unexpected journal line: ", strings));
                }
            }
        }
        if (I2 == -1) {
            String str4 = R;
            if (I == str4.length() && x.o(str, str4, false)) {
                dVar.f17642g = new a3.f(this, dVar);
                return;
            }
        }
        if (I2 == -1) {
            String str5 = T;
            if (I == str5.length() && x.o(str, str5, false)) {
                return;
            }
        }
        throw new IOException(Intrinsics.stringPlus("unexpected journal line: ", str));
    }
}
