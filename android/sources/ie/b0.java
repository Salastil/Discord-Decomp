package ie;

import java.io.IOException;
import java.io.InterruptedIOException;
import java.net.SocketTimeoutException;

/* loaded from: classes3.dex */
public class b0 extends m {

    /* renamed from: i, reason: collision with root package name */
    public final int f10653i;

    public b0(int i5) {
        super(i5 == 2000 ? 2001 : i5);
        this.f10653i = 1;
    }

    public static b0 a(IOException iOException, int i5) {
        String message = iOException.getMessage();
        int i6 = iOException instanceof SocketTimeoutException ? 2002 : iOException instanceof InterruptedIOException ? 1004 : (message == null || !tn.g.x(message).matches("cleartext.*not permitted.*")) ? 2001 : 2007;
        return i6 == 2007 ? new a0(iOException) : new b0(iOException, i6, i5);
    }

    public b0(String str, int i5) {
        super(str, i5 == 2000 ? 2001 : i5);
        this.f10653i = 1;
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public b0(IOException iOException, int i5, int i6) {
        super(i5, iOException);
        if (i5 == 2000 && i6 == 1) {
            i5 = 2001;
        }
        this.f10653i = i6;
    }

    public b0(String str, IOException iOException, int i5) {
        super(str, iOException, i5 == 2000 ? 2001 : i5);
        this.f10653i = 1;
    }
}
