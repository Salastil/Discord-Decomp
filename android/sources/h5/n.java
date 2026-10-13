package h5;

import com.budiyev.android.codescanner.CodeScanner;
import com.discord.qr.scanner.QRScanner;
import java.lang.Thread;
import java.util.EnumMap;
import java.util.List;

/* loaded from: classes.dex */
public final class n {
    public final jj.f a;

    /* renamed from: b, reason: collision with root package name */
    public final m f9542b;

    /* renamed from: c, reason: collision with root package name */
    public final u4.c f9543c;

    /* renamed from: d, reason: collision with root package name */
    public final EnumMap f9544d;

    /* renamed from: e, reason: collision with root package name */
    public final Object f9545e = new Object();

    /* renamed from: f, reason: collision with root package name */
    public volatile k f9546f;

    /* renamed from: g, reason: collision with root package name */
    public volatile l f9547g;

    /* renamed from: h, reason: collision with root package name */
    public volatile int f9548h;

    public n(u4.c cVar, Thread.UncaughtExceptionHandler uncaughtExceptionHandler, List list, QRScanner qRScanner) {
        jj.f fVar = new jj.f();
        this.a = fVar;
        m mVar = new m(this);
        this.f9542b = mVar;
        mVar.setUncaughtExceptionHandler(uncaughtExceptionHandler);
        EnumMap enumMap = new EnumMap(jj.c.class);
        this.f9544d = enumMap;
        enumMap.put((EnumMap) jj.c.f12786e, (jj.c) list);
        fVar.c(enumMap);
        this.f9546f = qRScanner;
        this.f9543c = cVar;
        this.f9548h = 1;
    }

    public static boolean a(n nVar, int i5) {
        nVar.f9548h = i5;
        u4.c cVar = nVar.f9543c;
        if (i5 != 4) {
            cVar.getClass();
            return true;
        }
        int i6 = ((CodeScanner) cVar.f18811d).F;
        if (i6 == 3) {
            return false;
        }
        if (i6 == 1) {
            ((CodeScanner) cVar.f18811d).f3711t = true;
            CodeScanner codeScanner = (CodeScanner) cVar.f18811d;
            codeScanner.f3696c.post(codeScanner.k);
        }
        return true;
    }
}
