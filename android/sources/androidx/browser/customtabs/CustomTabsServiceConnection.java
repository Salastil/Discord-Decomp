package androidx.browser.customtabs;

import android.content.ComponentName;
import android.content.Context;
import android.content.ServiceConnection;
import android.os.IBinder;
import android.os.IInterface;
import androidx.annotation.NonNull;
import b.b;
import b.c;
import b.d;
import q.k;

/* loaded from: classes.dex */
public abstract class CustomTabsServiceConnection implements ServiceConnection {
    private Context mApplicationContext;

    public Context getApplicationContext() {
        return this.mApplicationContext;
    }

    public abstract void onCustomTabsServiceConnected(ComponentName componentName, CustomTabsClient customTabsClient);

    @Override // android.content.ServiceConnection
    public final void onServiceConnected(@NonNull ComponentName componentName, @NonNull IBinder iBinder) {
        d dVar;
        if (this.mApplicationContext == null) {
            throw new IllegalStateException("Custom Tabs Service connected before an applicationcontext has been provided.");
        }
        int i5 = c.f2698f;
        if (iBinder == null) {
            dVar = null;
        } else {
            IInterface queryLocalInterface = iBinder.queryLocalInterface(d.f2699b);
            if (queryLocalInterface == null || !(queryLocalInterface instanceof d)) {
                b bVar = new b();
                bVar.f2697f = iBinder;
                dVar = bVar;
            } else {
                dVar = (d) queryLocalInterface;
            }
        }
        onCustomTabsServiceConnected(componentName, new k(dVar, componentName));
    }

    public void setApplicationContext(@NonNull Context context) {
        this.mApplicationContext = context;
    }
}
