package ye;

import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import android.os.Looper;
import android.os.Message;
import android.util.Log;

/* loaded from: classes3.dex */
public final class l extends fg.a {
    public final Context a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ e f20928b;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public l(e eVar, Context context) {
        super(Looper.myLooper() == null ? Looper.getMainLooper() : Looper.myLooper(), 1);
        this.f20928b = eVar;
        this.a = context.getApplicationContext();
    }

    @Override // android.os.Handler
    public final void handleMessage(Message message) {
        int i5 = message.what;
        if (i5 != 1) {
            Log.w("GoogleApiAvailability", "Don't know how to handle this message: " + i5);
            return;
        }
        int i6 = f.a;
        e eVar = this.f20928b;
        Context context = this.a;
        int b10 = eVar.b(context, i6);
        int i10 = i.f20923e;
        if (b10 == 1 || b10 == 2 || b10 == 3 || b10 == 9) {
            Intent a = eVar.a(context, "n", b10);
            eVar.g(context, b10, a == null ? null : PendingIntent.getActivity(context, 0, a, 201326592));
        }
    }
}
