package et;

import java.io.IOException;
import java.net.Socket;
import java.net.SocketTimeoutException;
import java.util.logging.Level;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class v extends okio.a {
    public final /* synthetic */ int k = 0;

    /* renamed from: l, reason: collision with root package name */
    public final Object f8285l;

    public v(Socket socket) {
        Intrinsics.checkNotNullParameter(socket, "socket");
        this.f8285l = socket;
    }

    @Override // okio.a
    public final void k() {
        switch (this.k) {
            case 0:
                Socket socket = (Socket) this.f8285l;
                try {
                    socket.close();
                    return;
                } catch (AssertionError e9) {
                    if (!y.g(e9)) {
                        throw e9;
                    }
                    n.a.log(Level.WARNING, "Failed to close timed out socket " + socket, (Throwable) e9);
                    return;
                } catch (Exception e10) {
                    n.a.log(Level.WARNING, "Failed to close timed out socket " + socket, (Throwable) e10);
                    return;
                }
            case 1:
                ((ts.h) this.f8285l).cancel();
                return;
            default:
                ((ws.w) this.f8285l).e(ws.b.CANCEL);
                ws.p pVar = ((ws.w) this.f8285l).f20147b;
                synchronized (pVar) {
                    long j = pVar.K;
                    long j5 = pVar.J;
                    if (j < j5) {
                        return;
                    }
                    pVar.J = j5 + 1;
                    pVar.L = System.nanoTime() + 1000000000;
                    Unit unit = Unit.a;
                    pVar.E.c(new rs.f(Intrinsics.stringPlus(pVar.f20115i, " ping"), pVar, 3), 0L);
                    return;
                }
        }
    }

    public void l() {
        if (j()) {
            throw m(null);
        }
    }

    public IOException m(IOException iOException) {
        switch (this.k) {
            case 0:
                SocketTimeoutException socketTimeoutException = new SocketTimeoutException("timeout");
                if (iOException != null) {
                    socketTimeoutException.initCause(iOException);
                }
                return socketTimeoutException;
            default:
                SocketTimeoutException socketTimeoutException2 = new SocketTimeoutException("timeout");
                if (iOException != null) {
                    socketTimeoutException2.initCause(iOException);
                }
                return socketTimeoutException2;
        }
    }

    public v(ts.h hVar) {
        this.f8285l = hVar;
    }

    public v(ws.w this$0) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        this.f8285l = this$0;
    }
}
