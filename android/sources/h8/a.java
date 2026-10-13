package h8;

import af.s;
import android.content.Context;
import androidx.activity.OnBackPressedDispatcher;
import androidx.core.view.n1;
import bs.h1;
import com.discord.cache.Cache;
import com.discord.chat.bridge.row.MessageRow;
import com.discord.chat.messagemanager.MessageViewManagers;
import com.discord.chat.presentation.list.item.ChatListItem;
import com.discord.chat.presentation.message.view.media.ViewAttachedListener;
import com.discord.chat.presentation.message.view.media.ViewScrollStateListener;
import com.discord.phone_verification.AppSignatureHelper;
import com.discord.resource_usage.DeviceResourceUsageManager;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.uimanager.UIManagerHelper;
import com.facebook.react.uimanager.events.EventDispatcher;
import e.t;
import gj.c;
import java.util.List;
import java.util.concurrent.Executor;
import jm.q;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.ArrayIteratorKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KClass;
import kotlinx.serialization.descriptors.SerialDescriptor;
import oh.w;
import u1.d;
import v1.e;
import v1.h;
import wm.n;
import wm.o;
import wm.r;
import wm.x;
import zr.b;
import zr.g;

/* loaded from: classes3.dex */
public final /* synthetic */ class a implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f9568d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f9569e;

    public /* synthetic */ a(int i5, Object obj) {
        this.f9568d = i5;
        this.f9569e = obj;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        int surfaceId;
        ViewScrollStateListener scrollStateListener_delegate$lambda$2;
        Unit _init_$lambda$2;
        List appSignatures_delegate$lambda$2;
        int eventHandler$lambda$2;
        Unit start$lambda$1$lambda$0;
        OnBackPressedDispatcher onBackPressedDispatcher;
        long recyclerItemId_delegate$lambda$0;
        switch (this.f9568d) {
            case 0:
                surfaceId = UIManagerHelper.getSurfaceId((ThemedReactContext) this.f9569e);
                return Integer.valueOf(surfaceId);
            case 1:
                scrollStateListener_delegate$lambda$2 = ViewAttachedListener.scrollStateListener_delegate$lambda$2((ViewAttachedListener) this.f9569e);
                return scrollStateListener_delegate$lambda$2;
            case 2:
                q qVar = (q) this.f9569e;
                qVar.d();
                qVar.a(false);
                qVar.k();
                return Unit.a;
            case 3:
                _init_$lambda$2 = Cache._init_$lambda$2((Cache) this.f9569e);
                return _init_$lambda$2;
            case 4:
                appSignatures_delegate$lambda$2 = AppSignatureHelper.appSignatures_delegate$lambda$2((AppSignatureHelper) this.f9569e);
                return appSignatures_delegate$lambda$2;
            case 5:
                return ArrayIteratorKt.iterator((Object[]) this.f9569e);
            case 6:
                return ((Iterable) this.f9569e).iterator();
            case 7:
                return this.f9569e;
            case 8:
                d dVar = (d) this.f9569e;
                dVar.g().execute(new w(4, dVar));
                return Unit.a;
            case 9:
                return Float.valueOf(((n1) ((c) this.f9569e).f9329e).n0().f1514d);
            case 10:
                return new ul.a((s) this.f9569e);
            case 11:
                h hVar = (h) this.f9569e;
                Executor executor = hVar.f19170g;
                if (executor == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("executor");
                    executor = null;
                }
                executor.execute(new e(hVar, 0));
                return Unit.a;
            case 12:
                eventHandler$lambda$2 = MessageViewManagers.getEventHandler$lambda$2((MessageRow) this.f9569e);
                return Integer.valueOf(eventHandler$lambda$2);
            case 13:
                start$lambda$1$lambda$0 = DeviceResourceUsageManager.start$lambda$1$lambda$0((DeviceResourceUsageManager) this.f9569e);
                return start$lambda$1$lambda$0;
            case 14:
                n nVar = (n) this.f9569e;
                r rVar = (r) nVar.f19931i.getValue(nVar, n.j[0]);
                if (rVar != null) {
                    ((EventDispatcher) rVar.f13124c).dispatchEvent(new o(UIManagerHelper.getSurfaceId((ReactContext) rVar.f13123b), rVar.a, 2));
                }
                return Unit.a;
            case 15:
                wm.w wVar = (wm.w) this.f9569e;
                x xVar = wVar.f19951f;
                if (xVar != x.f19956e && xVar != x.f19955d) {
                    wVar.f19949d.invoke();
                    wVar.f19952g = false;
                    wVar.a();
                }
                return Unit.a;
            case 16:
                xr.c cVar = (xr.c) this.f9569e;
                g g6 = com.facebook.imagepipeline.nativecode.c.g("kotlinx.serialization.Polymorphic", zr.c.f21413t, new SerialDescriptor[0], new com.facebook.react.runtime.r(21, cVar));
                KClass context = cVar.a;
                Intrinsics.checkNotNullParameter(g6, "<this>");
                Intrinsics.checkNotNullParameter(context, "context");
                return new b(g6, context);
            case 17:
                Context context2 = ((ym.h) this.f9569e).U.getContext();
                ReactContext reactContext = context2 instanceof ReactContext ? (ReactContext) context2 : null;
                Object currentActivity = reactContext != null ? reactContext.getCurrentActivity() : null;
                t tVar = currentActivity instanceof t ? (t) currentActivity : null;
                if (tVar != null && (onBackPressedDispatcher = tVar.getOnBackPressedDispatcher()) != null) {
                    onBackPressedDispatcher.d();
                }
                return Unit.a;
            case 18:
                recyclerItemId_delegate$lambda$0 = ChatListItem.recyclerItemId_delegate$lambda$0((ChatListItem) this.f9569e);
                return Long.valueOf(recyclerItemId_delegate$lambda$0);
            default:
                g gVar = (g) this.f9569e;
                return Integer.valueOf(h1.f(gVar, gVar.k));
        }
    }
}
