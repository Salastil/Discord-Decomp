package xe;

import a5.k0;
import android.content.Intent;
import android.os.Bundle;
import android.util.Log;
import com.google.android.gms.cloudmessaging.Rpc;
import com.google.android.gms.tasks.Task;
import java.io.IOException;
import jg.l;

/* loaded from: classes3.dex */
public final /* synthetic */ class c implements jg.a, jg.f {

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ c f20399e = new c(0);

    /* renamed from: i, reason: collision with root package name */
    public static final /* synthetic */ c f20400i = new c(1);

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ c f20401v = new c(2);

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f20402d;

    public /* synthetic */ c(int i5) {
        this.f20402d = i5;
    }

    @Override // jg.a
    public Object N(Task task) {
        switch (this.f20402d) {
            case 0:
                if (task.m()) {
                    return (Bundle) task.i();
                }
                if (Log.isLoggable("Rpc", 3)) {
                    Log.d("Rpc", "Error making request: ".concat(String.valueOf(task.h())));
                }
                throw new IOException("SERVICE_NOT_AVAILABLE", task.h());
            default:
                Intent intent = (Intent) ((Bundle) task.i()).getParcelable("notification_data");
                if (intent != null) {
                    return new a(intent);
                }
                return null;
        }
    }

    @Override // jg.f
    public l g(Object obj) {
        Bundle bundle = (Bundle) obj;
        int i5 = Rpc.f5642h;
        return (bundle == null || !bundle.containsKey("google.messenger")) ? k0.s(bundle) : k0.s(null);
    }
}
