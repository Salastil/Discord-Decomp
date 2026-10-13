package h5;

import com.budiyev.android.codescanner.CodeScanner;
import com.discord.qr.scanner.QRScanner;
import java.lang.Thread;
import java.util.List;

/* loaded from: classes.dex */
public final class b implements Thread.UncaughtExceptionHandler {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ CodeScanner f9524d;

    public b(CodeScanner codeScanner) {
        this.f9524d = codeScanner;
    }

    @Override // java.lang.Thread.UncaughtExceptionHandler
    public final void uncaughtException(Thread thread, Throwable th2) {
        CodeScanner codeScanner = this.f9524d;
        List list = CodeScanner.H;
        codeScanner.c();
        QRScanner qRScanner = this.f9524d.f3707p;
        if (qRScanner == null) {
            throw new ai.k(th2);
        }
        qRScanner.onError(th2);
    }
}
