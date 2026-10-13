package zl;

import af.s;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.UIManager;
import com.facebook.react.uimanager.UIManagerHelper;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class c {
    public final ReactApplicationContext a;

    /* renamed from: b, reason: collision with root package name */
    public final UIManager f21281b;

    /* renamed from: c, reason: collision with root package name */
    public final int f21282c;

    public c(ReactApplicationContext mReactContext) {
        Intrinsics.checkNotNullParameter(mReactContext, "mReactContext");
        this.a = mReactContext;
        Intrinsics.checkNotNullParameter(mReactContext, "<this>");
        this.f21281b = UIManagerHelper.getUIManager(mReactContext, 2);
        new s();
        this.f21282c = tl.c.d(mReactContext);
    }
}
