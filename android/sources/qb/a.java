package qb;

import android.app.Activity;
import com.github.yamill.orientation.OrientationModule;
import kotlin.jvm.functions.Function0;

/* loaded from: classes3.dex */
public final /* synthetic */ class a implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f16737d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ OrientationModule f16738e;

    public /* synthetic */ a(OrientationModule orientationModule, int i5) {
        this.f16737d = i5;
        this.f16738e = orientationModule;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        Activity _init_$lambda$1;
        Activity _init_$lambda$2;
        switch (this.f16737d) {
            case 0:
                _init_$lambda$1 = OrientationModule._init_$lambda$1(this.f16738e);
                return _init_$lambda$1;
            default:
                _init_$lambda$2 = OrientationModule._init_$lambda$2(this.f16738e);
                return _init_$lambda$2;
        }
    }
}
