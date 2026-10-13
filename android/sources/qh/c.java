package qh;

import android.os.Bundle;
import android.os.Handler;
import android.os.ResultReceiver;
import java.util.Objects;

/* loaded from: classes3.dex */
public final class c extends ResultReceiver {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f16888d = 1;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ jg.g f16889e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public c(Handler handler, jg.g gVar) {
        super(handler);
        this.f16889e = gVar;
    }

    @Override // android.os.ResultReceiver
    public final void onReceiveResult(int i5, Bundle bundle) {
        switch (this.f16888d) {
            case 0:
                jg.g gVar = this.f16889e;
                if (i5 != 1) {
                    gVar.d(new h(2));
                    break;
                } else {
                    gVar.d(new h(1));
                    break;
                }
            default:
                this.f16889e.d(null);
                break;
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public c(f fVar, Handler handler, jg.g gVar) {
        super(handler);
        this.f16889e = gVar;
        Objects.requireNonNull(fVar);
    }
}
