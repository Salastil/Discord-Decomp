package af;

import android.os.Message;
import android.util.Log;
import android.util.Pair;
import com.google.android.gms.common.api.Status;
import com.google.android.gms.common.api.internal.BasePendingResult;

/* loaded from: classes3.dex */
public final class d extends fg.a {
    @Override // android.os.Handler
    public final void handleMessage(Message message) {
        int i5 = message.what;
        if (i5 != 1) {
            if (i5 != 2) {
                Log.wtf("BasePendingResult", k0.d.i(i5, "Don't know how to handle message: "), new Exception());
                return;
            } else {
                ((BasePendingResult) message.obj).forceFailureUnlessReady(Status.E);
                return;
            }
        }
        Pair pair = (Pair) message.obj;
        if (pair.first != null) {
            throw new ClassCastException();
        }
        ze.n nVar = (ze.n) pair.second;
        try {
            throw null;
        } catch (RuntimeException e9) {
            BasePendingResult.zal(nVar);
            throw e9;
        }
    }
}
