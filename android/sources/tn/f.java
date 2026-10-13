package tn;

import android.content.Context;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.uimanager.UIManagerHelper;
import com.facebook.react.uimanager.events.EventDispatcher;
import kotlin.Unit;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final /* synthetic */ class f extends FunctionReferenceImpl implements Function3 {

    /* renamed from: d, reason: collision with root package name */
    public static final f f18665d = new f(3, g.class, "handleOnInsetsChange", "handleOnInsetsChange(Lcom/th3rdwave/safeareacontext/SafeAreaProvider;Lcom/th3rdwave/safeareacontext/EdgeInsets;Lcom/th3rdwave/safeareacontext/Rect;)V", 1);

    @Override // kotlin.jvm.functions.Function3
    public final Object invoke(Object obj, Object obj2, Object obj3) {
        d p02 = (d) obj;
        a p12 = (a) obj2;
        b p22 = (b) obj3;
        Intrinsics.checkNotNullParameter(p02, "p0");
        Intrinsics.checkNotNullParameter(p12, "p1");
        Intrinsics.checkNotNullParameter(p22, "p2");
        Context context = p02.getContext();
        Intrinsics.checkNotNull(context, "null cannot be cast to non-null type com.facebook.react.bridge.ReactContext");
        ReactContext context2 = (ReactContext) context;
        int id2 = p02.getId();
        EventDispatcher eventDispatcherForReactTag = UIManagerHelper.getEventDispatcherForReactTag(context2, id2);
        if (eventDispatcherForReactTag != null) {
            Intrinsics.checkNotNullParameter(context2, "context");
            eventDispatcherForReactTag.dispatchEvent(new cn.a(UIManagerHelper.getSurfaceId(context2), id2, p12, p22));
        }
        return Unit.a;
    }
}
