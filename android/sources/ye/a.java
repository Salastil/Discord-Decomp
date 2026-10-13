package ye;

import android.content.ComponentName;
import android.content.ServiceConnection;
import android.os.IBinder;
import bf.t;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.TimeoutException;

/* loaded from: classes3.dex */
public class a implements ServiceConnection {

    /* renamed from: d, reason: collision with root package name */
    public boolean f20902d = false;

    /* renamed from: e, reason: collision with root package name */
    public final LinkedBlockingQueue f20903e = new LinkedBlockingQueue();

    public final IBinder a() {
        TimeUnit timeUnit = TimeUnit.MILLISECONDS;
        t.f("BlockingServiceConnection.getServiceWithTimeout() called on main thread");
        if (this.f20902d) {
            throw new IllegalStateException("Cannot call get on this connection more than once");
        }
        this.f20902d = true;
        IBinder iBinder = (IBinder) this.f20903e.poll(10000L, timeUnit);
        if (iBinder != null) {
            return iBinder;
        }
        throw new TimeoutException("Timed out waiting for the service connection");
    }

    @Override // android.content.ServiceConnection
    public final void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        this.f20903e.add(iBinder);
    }

    @Override // android.content.ServiceConnection
    public final void onServiceDisconnected(ComponentName componentName) {
    }
}
