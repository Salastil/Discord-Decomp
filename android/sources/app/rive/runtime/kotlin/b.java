package app.rive.runtime.kotlin;

import c5.o;
import c5.s;
import com.discord.play_delivery.PlayAssetDelivery;
import com.google.android.gms.tasks.OnCompleteListener;
import com.google.android.gms.tasks.Task;
import io.sentry.IScope;
import io.sentry.protocol.v;
import io.sentry.r3;
import io.sentry.util.d;
import io.sentry.util.l;
import java.nio.charset.Charset;

/* loaded from: classes.dex */
public final /* synthetic */ class b implements o, OnCompleteListener, d, r3 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f2610d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ String f2611e;

    public /* synthetic */ b(v vVar, String str) {
        this.f2610d = 4;
        this.f2611e = str;
    }

    @Override // io.sentry.util.d
    public Object b() {
        int i5 = this.f2610d;
        String str = this.f2611e;
        switch (i5) {
            case 2:
                return str;
            default:
                Charset charset = l.a;
                if (str.equals("0000-0000")) {
                    str = "00000000-0000-0000-0000-000000000000";
                }
                return str.replace("-", "");
        }
    }

    @Override // c5.o
    public void d(s sVar) {
        RiveAnimationView.loadFromNetwork$lambda$5(this.f2611e, sVar);
    }

    @Override // io.sentry.r3
    public void h(IScope iScope) {
        iScope.B(this.f2611e);
    }

    @Override // com.google.android.gms.tasks.OnCompleteListener
    public void onComplete(Task task) {
        PlayAssetDelivery.startFetch$lambda$0(this.f2611e, task);
    }

    public /* synthetic */ b(String str, int i5) {
        this.f2610d = i5;
        this.f2611e = str;
    }
}
