package com.facebook.react.runtime;

import android.graphics.drawable.Drawable;
import androidx.appcompat.view.ContextThemeWrapper;
import bs.v1;
import bs.w1;
import com.discord.R;
import com.discord.key_commands.KeyCommandsModule;
import com.discord.mobile_voice_overlay.MobileVoiceOverlayAssets;
import com.discord.mobile_voice_overlay.MobileVoiceOverlayData;
import com.discord.mobile_voice_overlay.utils.OverlayViewProvider;
import com.discord.mobile_voice_overlay.views.OverlayView;
import com.discord.react_strings.RenderContext;
import com.discord.recycler_view.animator.NoMoveItemAnimator;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.devsupport.inspector.FrameTimingSequence;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.uimanager.UIManagerHelper;
import com.facebook.react.uimanager.events.EventDispatcher;
import com.github.yamill.orientation.OrientationModule;
import com.swmansion.rnscreens.bottomsheet.SheetAnimationCoordinator;
import com.swmansion.rnscreens.r0;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import java.util.concurrent.Executor;
import kotlin.Unit;
import kotlin.collections.m0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.StringCompanionObject;
import kotlin.jvm.internal.TypeReference;
import kotlin.reflect.KTypeProjection;
import kotlin.text.MatchResult;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;

/* loaded from: classes3.dex */
public final /* synthetic */ class r implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f5043d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f5044e;

    public /* synthetic */ r(int i5, Object obj) {
        this.f5043d = i5;
        this.f5044e = obj;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Unit createReactHostInspectorTarget$lambda$69$lambda$68;
        Unit data$lambda$2;
        Unit assets$lambda$1;
        CharSequence asString$lambda$0;
        Unit _init_$lambda$0;
        CharSequence replace$lambda$0;
        Unit onAnimationsFinishedEvents$lambda$0;
        SerialDescriptor descriptor;
        zr.g g6;
        Unit _init_$lambda$1;
        int i5 = this.f5043d;
        int i6 = 1;
        int i10 = 0;
        Executor executor = null;
        r8 = null;
        List list = null;
        Executor executor2 = null;
        Object obj2 = this.f5044e;
        switch (i5) {
            case 0:
                createReactHostInspectorTarget$lambda$69$lambda$68 = ReactHostImpl.createReactHostInspectorTarget$lambda$69$lambda$68((ReactHostInspectorTarget) obj2, (FrameTimingSequence) obj);
                return createReactHostInspectorTarget$lambda$69$lambda$68;
            case 1:
                return r0.c((r0) obj2, (com.swmansion.rnscreens.b) obj);
            case 2:
                data$lambda$2 = OverlayViewProvider.setData$lambda$2((MobileVoiceOverlayData) obj2, (OverlayView) obj);
                return data$lambda$2;
            case 3:
                assets$lambda$1 = OverlayViewProvider.setAssets$lambda$1((MobileVoiceOverlayAssets) obj2, (OverlayView) obj);
                return assets$lambda$1;
            case 4:
                hn.f fVar = (hn.f) obj2;
                int intValue = ((Integer) obj).intValue();
                ContextThemeWrapper contextThemeWrapper = fVar.G;
                if (intValue == 16) {
                    contextThemeWrapper.setTheme(R.style.Theme_Material3_Light_NoActionBar);
                } else if (intValue != 32) {
                    contextThemeWrapper.setTheme(R.style.Theme_Material3_DayNight_NoActionBar);
                } else {
                    contextThemeWrapper.setTheme(R.style.Theme_Material3_Dark_NoActionBar);
                }
                fVar.N.j0(contextThemeWrapper, fVar);
                return Unit.a;
            case 5:
                return obj == ((kotlin.collections.a) obj2) ? "(this Collection)" : String.valueOf(obj);
            case 6:
                kotlin.collections.j jVar = (kotlin.collections.j) obj2;
                Map.Entry it = (Map.Entry) obj;
                kotlin.collections.g gVar = kotlin.collections.j.f13508i;
                Intrinsics.checkNotNullParameter(it, "it");
                StringBuilder sb2 = new StringBuilder();
                Object key = it.getKey();
                sb2.append(key == jVar ? "(this Map)" : String.valueOf(key));
                sb2.append('=');
                Object value = it.getValue();
                sb2.append(value != jVar ? String.valueOf(value) : "(this Map)");
                return sb2.toString();
            case 7:
                asString$lambda$0 = TypeReference.asString$lambda$0((TypeReference) obj2, (KTypeProjection) obj);
                return asString$lambda$0;
            case 8:
                return Float.valueOf(((SheetAnimationCoordinator) obj2).b().getHeight());
            case 9:
                _init_$lambda$0 = OrientationModule._init_$lambda$0((OrientationModule) obj2, ((Boolean) obj).booleanValue());
                return _init_$lambda$0;
            case 10:
                String it2 = (String) obj;
                Intrinsics.checkNotNullParameter(it2, "it");
                ((ArrayList) obj2).add(it2);
                return Unit.a;
            case 11:
                replace$lambda$0 = RenderContext.Argument.replace$lambda$0((Function3) obj2, (MatchResult) obj);
                return replace$lambda$0;
            case 12:
                u1.d dVar = (u1.d) obj2;
                o1.l e9 = (o1.l) obj;
                Intrinsics.checkNotNullParameter(e9, "e");
                dVar.g().execute(new u1.b(dVar, e9, i10));
                return Unit.a;
            case 13:
                ((af.s) obj2).u(uo.c.b(((Float) obj).floatValue()));
                return Unit.a;
            case 14:
                v1.h hVar = (v1.h) obj2;
                o1.d e10 = (o1.d) obj;
                Intrinsics.checkNotNullParameter(e10, "e");
                Executor executor3 = hVar.f19170g;
                if (executor3 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("executor");
                } else {
                    executor = executor3;
                }
                executor.execute(new v1.c(hVar, e10, i6));
                return Unit.a;
            case 15:
                onAnimationsFinishedEvents$lambda$0 = NoMoveItemAnimator.onAnimationsFinishedEvents$lambda$0((NoMoveItemAnimator) obj2, (Unit) obj);
                return onAnimationsFinishedEvents$lambda$0;
            case 16:
                w1.e eVar = (w1.e) obj2;
                o1.d e11 = (o1.d) obj;
                Intrinsics.checkNotNullParameter(e11, "e");
                Executor executor4 = eVar.f19617g;
                if (executor4 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("executor");
                } else {
                    executor2 = executor4;
                }
                executor2.execute(new w1.a(eVar, e11, i6));
                return Unit.a;
            case 17:
                xe.k kVar = (xe.k) obj2;
                String text = (String) obj;
                Intrinsics.checkNotNullParameter(text, "text");
                ThemedReactContext themedReactContext = (ThemedReactContext) kVar.f20422d;
                bm.d dVar2 = (bm.d) kVar.f20421c;
                tl.b.a(themedReactContext, dVar2.getId(), new cn.b(kVar.a, text, dVar2.getId(), 3));
                return Unit.a;
            case 18:
                wm.n nVar = (wm.n) obj2;
                int intValue2 = ((Integer) obj).intValue();
                wm.r rVar = (wm.r) nVar.f19931i.getValue(nVar, wm.n.j[0]);
                if (rVar != null) {
                    ((EventDispatcher) rVar.f13124c).dispatchEvent(new wm.l(UIManagerHelper.getSurfaceId((ReactContext) rVar.f13123b), rVar.a, intValue2));
                }
                return Unit.a;
            case 19:
                ((wr.b) obj2).b(null);
                return Unit.a;
            case 20:
                zr.a buildSerialDescriptor = (zr.a) obj;
                Intrinsics.checkNotNullParameter(buildSerialDescriptor, "$this$buildSerialDescriptor");
                KSerializer kSerializer = ((w1) obj2).f3250b;
                if (kSerializer != null && (descriptor = kSerializer.getDescriptor()) != null) {
                    list = descriptor.getAnnotations();
                }
                if (list == null) {
                    list = m0.f13512d;
                }
                buildSerialDescriptor.getClass();
                Intrinsics.checkNotNullParameter(list, "<set-?>");
                buildSerialDescriptor.f21405b = list;
                return Unit.a;
            case 21:
                xr.c cVar = (xr.c) obj2;
                zr.a buildSerialDescriptor2 = (zr.a) obj;
                Intrinsics.checkNotNullParameter(buildSerialDescriptor2, "$this$buildSerialDescriptor");
                nf.e.A(StringCompanionObject.INSTANCE);
                zr.a.a(buildSerialDescriptor2, "type", v1.f3245b);
                g6 = com.facebook.imagepipeline.nativecode.c.g("kotlinx.serialization.Polymorphic<" + cVar.a.getSimpleName() + '>', zr.h.f21431t, new SerialDescriptor[0], new kr.n(27));
                zr.a.a(buildSerialDescriptor2, "value", g6);
                List list2 = cVar.f20555b;
                Intrinsics.checkNotNullParameter(list2, "<set-?>");
                buildSerialDescriptor2.f21405b = list2;
                return Unit.a;
            case 22:
                _init_$lambda$1 = KeyCommandsModule._init_$lambda$1((KeyCommandsModule) obj2, (String) obj);
                return _init_$lambda$1;
            case 23:
                zm.c cVar2 = (zm.c) obj2;
                um.d result = (um.d) obj;
                Intrinsics.checkNotNullParameter(result, "result");
                if (!Intrinsics.areEqual(result, um.c.a)) {
                    if (!(result instanceof um.b)) {
                        throw new fo.n();
                    }
                    cVar2.setBackButtonIcon$react_native_screens_release(((um.b) result).a);
                    if (!cVar2.f21292g0) {
                        cVar2.e();
                    }
                }
                return Unit.a;
            case 24:
                Drawable drawable = (Drawable) obj;
                ((bn.s) obj2).invoke(drawable != null ? new bn.c(drawable) : bn.b.a);
                return Unit.a;
            default:
                zr.g gVar2 = (zr.g) obj2;
                int intValue3 = ((Integer) obj).intValue();
                return gVar2.f21426f[intValue3] + ": " + gVar2.f21427g[intValue3].a();
        }
    }

    public /* synthetic */ r(wr.b bVar, wr.a aVar) {
        this.f5043d = 19;
        this.f5044e = bVar;
    }
}
