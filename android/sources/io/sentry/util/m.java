package io.sentry.util;

import android.os.Bundle;
import androidx.transition.Transition;
import com.facebook.cache.common.CacheKey;
import com.facebook.imagepipeline.core.ImagePipeline;
import io.sentry.IScope;
import io.sentry.r3;
import java.util.concurrent.CancellationException;
import kotlin.jvm.internal.Intrinsics;
import m3.s;
import m3.t;

/* loaded from: classes3.dex */
public final /* synthetic */ class m implements r3, o8.f, hc.f, t {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f12046d;

    public /* synthetic */ m(int i5) {
        this.f12046d = i5;
    }

    @Override // hc.f
    public hc.g a(Bundle bundle) {
        return new le.b(bundle.getInt(le.b.f13854y, -1), bundle.getInt(le.b.E, -1), bundle.getInt(le.b.F, -1), bundle.getByteArray(le.b.G));
    }

    @Override // o8.f
    public boolean apply(Object obj) {
        CacheKey it = (CacheKey) obj;
        CancellationException cancellationException = ImagePipeline.k;
        Intrinsics.checkNotNullParameter(it, "it");
        return true;
    }

    @Override // m3.t
    public void b(s sVar, Transition transition, boolean z5) {
        switch (this.f12046d) {
            case 25:
                sVar.onTransitionStart(transition, z5);
                break;
            case 26:
                sVar.onTransitionEnd(transition, z5);
                break;
            case 27:
                sVar.onTransitionCancel(transition);
                break;
            case 28:
                sVar.onTransitionPause(transition);
                break;
            default:
                sVar.onTransitionResume(transition);
                break;
        }
    }

    @Override // io.sentry.r3
    public void h(IScope iScope) {
        iScope.L(new hc.m(24, iScope));
    }
}
