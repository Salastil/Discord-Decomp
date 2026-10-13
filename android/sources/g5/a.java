package g5;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import com.facebook.react.uimanager.ThemedReactContext;

/* loaded from: classes.dex */
public final class a extends BroadcastReceiver {
    public final Context a;

    /* renamed from: b, reason: collision with root package name */
    public b f9115b = b.f9116f;

    public a(ThemedReactContext themedReactContext) {
        this.a = themedReactContext.getApplicationContext();
    }

    @Override // android.content.BroadcastReceiver
    public final void onReceive(Context context, Intent intent) {
        if ("android.media.AUDIO_BECOMING_NOISY".equals(intent.getAction())) {
            this.f9115b.c();
        }
    }
}
