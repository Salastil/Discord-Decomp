package qh;

import android.app.Activity;
import android.app.PendingIntent;
import android.content.Intent;
import android.os.Build;
import android.os.Bundle;
import com.google.android.play.agesignals.AgeSharingConsentWrapperActivity;
import java.util.Objects;

/* loaded from: classes3.dex */
public final class d extends rh.a {

    /* renamed from: g, reason: collision with root package name */
    public final dg.b f16890g;

    /* renamed from: h, reason: collision with root package name */
    public final jg.g f16891h;

    /* renamed from: i, reason: collision with root package name */
    public final Activity f16892i;
    public final /* synthetic */ f j;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public d(f fVar, jg.g gVar, Activity activity) {
        super("com.google.android.play.agesignals.protocol.IAgeSignalsAccessCallback", 4);
        Objects.requireNonNull(fVar);
        this.j = fVar;
        this.f16890g = new dg.b("OnAgeSignalsAccessCallback", 0);
        this.f16891h = gVar;
        this.f16892i = activity;
    }

    public final void z(Bundle bundle) {
        dg.b bVar = this.f16890g;
        bVar.c("onCompleteRequestAgeSignalsAccess", new Object[0]);
        f fVar = this.j;
        dg.g gVar = fVar.f16898c;
        jg.g gVar2 = this.f16891h;
        gVar.c(gVar2);
        PendingIntent pendingIntent = !bundle.containsKey("age.sharing.consent.intent") ? null : Build.VERSION.SDK_INT >= 33 ? (PendingIntent) bundle.getParcelable("age.sharing.consent.intent", PendingIntent.class) : (PendingIntent) bundle.getParcelable("age.sharing.consent.intent");
        if (pendingIntent == null) {
            gVar2.d(new h(bundle.containsKey("age.signals.status") ? Integer.valueOf(bundle.getInt("age.signals.status")) : null));
            return;
        }
        bVar.c("In-app age sharing consent", new Object[0]);
        Activity activity = this.f16892i;
        Intent intent = new Intent(activity, (Class<?>) AgeSharingConsentWrapperActivity.class);
        intent.putExtra("confirmation_intent", pendingIntent);
        intent.putExtra("result_receiver", new c(fVar, fVar.a, gVar2));
        activity.startActivity(intent);
    }
}
