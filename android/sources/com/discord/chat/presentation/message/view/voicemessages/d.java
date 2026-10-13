package com.discord.chat.presentation.message.view.voicemessages;

import android.view.View;
import android.view.ViewGroup;
import com.discord.react_strings.RenderContext;
import com.swmansion.gesturehandler.react.RNGestureHandlerModule;
import java.util.Map;
import jm.q;
import km.k;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final /* synthetic */ class d implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4055d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ ViewGroup f4056e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ int f4057i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ int f4058v;

    public /* synthetic */ d(ViewGroup viewGroup, int i5, int i6, int i10) {
        this.f4055d = i10;
        this.f4056e = viewGroup;
        this.f4057i = i5;
        this.f4058v = i6;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Unit a11yAudioProgressDescription$lambda$22;
        Unit a11yAudioProgressDescription$lambda$24;
        Map map;
        switch (this.f4055d) {
            case 0:
                a11yAudioProgressDescription$lambda$22 = AudioPlayerView.getA11yAudioProgressDescription$lambda$22((AudioPlayerView) this.f4056e, this.f4057i, this.f4058v, (RenderContext) obj);
                return a11yAudioProgressDescription$lambda$22;
            case 1:
                a11yAudioProgressDescription$lambda$24 = AudioPlayerView.getA11yAudioProgressDescription$lambda$24((AudioPlayerView) this.f4056e, this.f4057i, this.f4058v, (RenderContext) obj);
                return a11yAudioProgressDescription$lambda$24;
            default:
                km.f fVar = (km.f) this.f4056e;
                jm.f handler = (jm.f) obj;
                Intrinsics.checkNotNullParameter(handler, "handler");
                RNGestureHandlerModule.Companion.getClass();
                map = RNGestureHandlerModule.registries;
                k kVar = (k) map.get(Integer.valueOf(fVar.f13436y));
                if (kVar == null) {
                    throw new Exception("Tried to access a non-existent registry");
                }
                handler.getClass();
                boolean z5 = handler instanceof q;
                int i5 = this.f4057i;
                if (z5 && i5 == 5) {
                    fVar.getChildCount();
                    fVar.f13432i.add(Integer.valueOf(handler.f12874d));
                    if (fVar.getChildCount() != 0) {
                        View childAt = fVar.getChildAt(0);
                        Intrinsics.checkNotNullExpressionValue(childAt, "getChildAt(...)");
                        fVar.i(childAt);
                    }
                } else {
                    kVar.a(handler.f12874d, this.f4058v, i5, fVar);
                    if (i5 == 6) {
                        handler.f12877g = fVar;
                    }
                    fVar.f13434w.add(Integer.valueOf(handler.f12874d));
                }
                return Unit.a;
        }
    }
}
