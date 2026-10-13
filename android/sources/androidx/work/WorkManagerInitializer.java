package androidx.work;

import android.content.Context;
import j3.b;
import java.util.Collections;
import java.util.List;
import v3.p;
import v3.r;
import w3.o;

/* loaded from: classes.dex */
public final class WorkManagerInitializer implements b {
    public static final String a = p.f("WrkMgrInitializer");

    /* JADX WARN: Code restructure failed: missing block: B:13:0x002d, code lost:
    
        r2 = r5.getApplicationContext();
     */
    /* JADX WARN: Code restructure failed: missing block: B:14:0x0033, code lost:
    
        if (w3.o.f19659l != null) goto L17;
     */
    /* JADX WARN: Code restructure failed: missing block: B:15:0x0035, code lost:
    
        w3.o.f19659l = w3.q.g(r2, r1);
     */
    /* JADX WARN: Code restructure failed: missing block: B:16:0x003b, code lost:
    
        w3.o.k = w3.o.f19659l;
     */
    @Override // j3.b
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object create(Context context) {
        p.d().a(a, "Initializing WorkManager with default configuration.");
        v3.b bVar = new v3.b(new r());
        synchronized (o.f19660m) {
            try {
                o oVar = o.k;
                if (oVar != null && o.f19659l != null) {
                    throw new IllegalStateException("WorkManager is already initialized.  Did you try to initialize it manually without disabling WorkManagerInitializer? See WorkManager#initialize(Context, Configuration) or the class level Javadoc for more information.");
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return o.a(context);
    }

    @Override // j3.b
    public final List dependencies() {
        return Collections.EMPTY_LIST;
    }
}
