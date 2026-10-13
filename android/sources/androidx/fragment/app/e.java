package androidx.fragment.app;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.graphics.Canvas;
import android.graphics.Rect;
import android.text.Layout;
import android.view.View;
import android.view.ViewGroup;
import com.appsflyer.internal.AFa1uSDK;
import com.appsflyer.internal.AFd1ySDK;
import com.appsflyer.internal.AFi1bSDK;
import com.appsflyer.internal.AFj1rSDK;
import com.discord.chat.presentation.message.view.MediaView;
import com.discord.chat.presentation.root.ChatView;
import com.discord.media_player.MediaPlayer;
import com.discord.media_player.MediaPlayerView;
import com.facebook.cache.common.CacheKey;
import com.facebook.imagepipeline.image.EncodedImage;
import com.facebook.react.HeadlessJsTaskService;
import com.facebook.react.ReactInstanceEventListener;
import com.facebook.react.ReactInstanceManager;
import com.facebook.react.ReactPackageTurboModuleManagerDelegate;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.PromiseImpl;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.devsupport.PausedInDebuggerOverlayDialogManager;
import com.facebook.react.devsupport.interfaces.DevSupportManager;
import com.facebook.react.jstasks.HeadlessJsTaskConfig;
import com.facebook.react.jstasks.HeadlessJsTaskContext;
import com.facebook.react.views.text.PreparedLayoutTextView;
import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.Player;
import com.google.android.exoplayer2.analytics.AnalyticsListener$EventTime;
import com.google.android.exoplayer2.decoder.DecoderReuseEvaluation;
import com.google.firebase.messaging.EnhancedIntentService;
import com.reactnativecommunity.webview.RNCWebViewModule;
import io.sentry.android.replay.ReplayCache;
import io.sentry.android.replay.screenshot.PixelCopyStrategy;
import io.sentry.android.replay.util.ExecutorsKt;
import io.sentry.android.replay.util.PersistableLinkedList;
import io.sentry.android.replay.viewhierarchy.ViewHierarchyNode;
import io.sentry.i6;
import io.sentry.k6;
import io.sentry.l3;
import io.sentry.p3;
import io.sentry.react.RNSentryModuleImpl;
import io.sentry.v5;
import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.logging.Logger;
import kotlin.Pair;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final /* synthetic */ class e implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f1987d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f1988e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f1989i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Object f1990v;

    public /* synthetic */ e(View view, ChatView chatView, Pair pair) {
        this.f1987d = 8;
        this.f1989i = view;
        this.f1988e = chatView;
        this.f1990v = pair;
    }

    /* JADX WARN: Type inference failed for: r1v72, types: [java.lang.Object, nc.o] */
    @Override // java.lang.Runnable
    public final void run() {
        final int i5 = 0;
        final int i6 = 1;
        switch (this.f1987d) {
            case 0:
                ViewGroup container = (ViewGroup) this.f1988e;
                View view = (View) this.f1989i;
                g this$0 = (g) this.f1990v;
                Intrinsics.checkNotNullParameter(container, "$container");
                Intrinsics.checkNotNullParameter(this$0, "this$0");
                container.endViewTransition(view);
                this$0.f2007c.a.c(this$0);
                return;
            case 1:
                y1 y1Var = (y1) this.f1988e;
                y1 y1Var2 = (y1) this.f1989i;
                q this$02 = (q) this.f1990v;
                Intrinsics.checkNotNullParameter(this$02, "this$0");
                n1.a(y1Var.f2125c, y1Var2.f2125c, this$02.f2083o, this$02.f2082n);
                return;
            case 2:
                u1 impl = (u1) this.f1988e;
                View view2 = (View) this.f1989i;
                Rect lastInEpicenterRect = (Rect) this.f1990v;
                Intrinsics.checkNotNullParameter(impl, "$impl");
                Intrinsics.checkNotNullParameter(lastInEpicenterRect, "$lastInEpicenterRect");
                u1.j(view2, lastInEpicenterRect);
                return;
            case 3:
                bc.b bVar = (bc.b) this.f1988e;
                wb.i iVar = (wb.i) this.f1989i;
                String str = iVar.a;
                wb.h hVar = (wb.h) this.f1990v;
                bVar.getClass();
                Logger logger = bc.b.f2772f;
                try {
                    xb.e a = bVar.f2774c.a(str);
                    if (a == null) {
                        String str2 = "Transport backend '" + str + "' is not registered";
                        logger.warning(str2);
                        new IllegalArgumentException(str2);
                    } else {
                        ((dc.h) bVar.f2776e).o(new bc.a(bVar, iVar, ((ub.b) a).a(hVar), i5));
                    }
                    return;
                } catch (Exception e9) {
                    logger.warning("Error scheduling event " + e9.getMessage());
                    return;
                }
            case 4:
                ((AFa1uSDK) this.f1988e).e_((Context) this.f1989i, (Intent) this.f1990v);
                return;
            case 5:
                AFd1ySDK.getMediationNetwork((AFd1ySDK) this.f1988e, (Throwable) this.f1989i, (String) this.f1990v);
                return;
            case 6:
                ((AFj1rSDK) this.f1988e).getMediationNetwork((AFi1bSDK) this.f1989i, (Runnable) this.f1990v);
                return;
            case 7:
                MediaView.playAfterReattachingSurface$lambda$15((MediaView) this.f1988e, (MediaPlayer) this.f1989i, (MediaPlayerView) this.f1990v);
                return;
            case 8:
                ChatView.attachPortalViewToChatList$lambda$5$lambda$4((View) this.f1989i, (ChatView) this.f1988e, (Pair) this.f1990v);
                return;
            case 9:
                HeadlessJsTaskService.invokeStartTask$lambda$0((HeadlessJsTaskContext) this.f1988e, (HeadlessJsTaskConfig) this.f1989i, (HeadlessJsTaskService) this.f1990v);
                return;
            case 10:
                ((ReactInstanceManager) this.f1988e).lambda$setupReactContext$3((ReactInstanceEventListener[]) this.f1989i, (ReactApplicationContext) this.f1990v);
                return;
            case 11:
                ReactPackageTurboModuleManagerDelegate.initialize$lambda$0((ReactPackageTurboModuleManagerDelegate) this.f1988e, (ReactApplicationContext) this.f1989i, (List) this.f1990v);
                return;
            case 12:
                PausedInDebuggerOverlayDialogManager.showPausedInDebuggerOverlay$lambda$3((PausedInDebuggerOverlayDialogManager) this.f1988e, (String) this.f1989i, (DevSupportManager.PausedInDebuggerOverlayCommandListener) this.f1990v);
                return;
            case 13:
                PreparedLayoutTextView.onDraw$lambda$1((Layout) this.f1988e, (Canvas) this.f1989i, (PreparedLayoutTextView) this.f1990v);
                return;
            case 14:
                EnhancedIntentService enhancedIntentService = (EnhancedIntentService) this.f1988e;
                Intent intent = (Intent) this.f1989i;
                jg.g gVar = (jg.g) this.f1990v;
                int i10 = EnhancedIntentService.f6188d;
                enhancedIntentService.getClass();
                try {
                    enhancedIntentService.handleIntent(intent);
                    return;
                } finally {
                    gVar.b(null);
                }
            case 15:
                RNCWebViewModule.lambda$injectJavaScriptWithWebViewKey$1((String) this.f1988e, (String) this.f1989i, (Promise) this.f1990v);
                return;
            case 16:
                ha.b this$03 = (ha.b) this.f1988e;
                CacheKey key = (CacheKey) this.f1989i;
                EncodedImage encodedImage = (EncodedImage) this.f1990v;
                ha.l lVar = this$03.f9598g;
                Intrinsics.checkNotNullParameter(this$03, "this$0");
                Intrinsics.checkNotNullParameter(key, "$key");
                try {
                    this$03.e(key, encodedImage);
                    return;
                } catch (Throwable th2) {
                    try {
                        Intrinsics.checkNotNullParameter(th2, "th");
                        throw th2;
                    } finally {
                        Intrinsics.checkNotNull(encodedImage);
                        lVar.Y(key, encodedImage);
                        EncodedImage.closeSafely(encodedImage);
                    }
                }
            case 17:
                com.google.android.exoplayer2.f fVar = (com.google.android.exoplayer2.f) this.f1988e;
                fi.b0 b0Var = (fi.b0) this.f1989i;
                nd.s sVar = (nd.s) this.f1990v;
                ic.a aVar = fVar.f5417c;
                fi.r0 f2 = b0Var.f();
                ic.u uVar = (ic.u) aVar;
                androidx.appcompat.widget.w wVar = uVar.f10546v;
                Player player = uVar.f10549y;
                player.getClass();
                wVar.getClass();
                wVar.f1142e = fi.e0.k(f2);
                if (!f2.isEmpty()) {
                    wVar.f1145w = (nd.s) f2.get(0);
                    sVar.getClass();
                    wVar.f1146x = sVar;
                }
                if (((nd.s) wVar.f1144v) == null) {
                    wVar.f1144v = androidx.appcompat.widget.w.v(player, (fi.e0) wVar.f1142e, (nd.s) wVar.f1145w, (hc.s1) wVar.f1141d);
                }
                wVar.P(player.J());
                return;
            case 18:
                io.sentry.internal.debugmeta.c cVar = (io.sentry.internal.debugmeta.c) this.f1988e;
                android.util.Pair pair = (android.util.Pair) this.f1989i;
                ((ic.u) ((ic.a) ((hc.f1) cVar.f11623i).f9700i)).d(((Integer) pair.first).intValue(), (nd.s) pair.second, (Exception) this.f1990v);
                return;
            case 19:
                PixelCopyStrategy.capture$lambda$2$lambda$1((PixelCopyStrategy) this.f1988e, (ViewHierarchyNode) this.f1990v, (View) this.f1989i);
                return;
            case 20:
                PixelCopyStrategy.capture$lambda$2$lambda$1$lambda$0((PixelCopyStrategy) this.f1988e, (View) this.f1989i, (ArrayList) this.f1990v);
                return;
            case 21:
                ExecutorsKt.submitSafely$lambda$0((Runnable) this.f1988e, (v5) this.f1989i, (String) this.f1990v);
                return;
            case 22:
                PersistableLinkedList.persistRecording$lambda$1((PersistableLinkedList) this.f1988e, (l3) this.f1989i, (ReplayCache) this.f1990v);
                return;
            case 23:
                io.sentry.cache.g gVar2 = (io.sentry.cache.g) this.f1988e;
                i6 i6Var = (i6) this.f1989i;
                p3 p3Var = (p3) this.f1990v;
                if (i6Var != null) {
                    gVar2.r(i6Var, "trace.json");
                    return;
                }
                e4.m mVar = p3Var.f11722r;
                i6 i6Var2 = new i6((io.sentry.protocol.v) mVar.f7963e, (k6) mVar.f7964i, "default", null);
                i6Var2.F = "auto";
                gVar2.r(i6Var2, "trace.json");
                return;
            case 24:
                RNSentryModuleImpl.lambda$takeScreenshotOnUiThread$4((byte[][]) this.f1988e, (Activity) this.f1989i, (CountDownLatch) this.f1990v);
                return;
            case 25:
                e4.c cVar2 = (e4.c) this.f1988e;
                final Format format = (Format) this.f1989i;
                final DecoderReuseEvaluation decoderReuseEvaluation = (DecoderReuseEvaluation) this.f1990v;
                hc.w wVar2 = (hc.w) cVar2.f7940i;
                int i11 = ke.d0.a;
                ic.u uVar2 = (ic.u) wVar2.f9929d.f5368q;
                final AnalyticsListener$EventTime j = uVar2.j();
                uVar2.k(j, 1009, new ke.j() { // from class: ic.e
                    @Override // ke.j
                    public final void invoke(Object obj) {
                        b bVar2 = (b) obj;
                        switch (i5) {
                            case 0:
                                AnalyticsListener$EventTime analyticsListener$EventTime = j;
                                Format format2 = format;
                                bVar2.onAudioInputFormatChanged(analyticsListener$EventTime, format2);
                                bVar2.onAudioInputFormatChanged(analyticsListener$EventTime, format2, decoderReuseEvaluation);
                                break;
                            default:
                                AnalyticsListener$EventTime analyticsListener$EventTime2 = j;
                                Format format3 = format;
                                bVar2.onVideoInputFormatChanged(analyticsListener$EventTime2, format3);
                                bVar2.onVideoInputFormatChanged(analyticsListener$EventTime2, format3, decoderReuseEvaluation);
                                break;
                        }
                    }
                });
                return;
            case 26:
                jl.e eVar = (jl.e) this.f1988e;
                String str3 = (String) this.f1989i;
                String str4 = (String) this.f1990v;
                lh.f fVar2 = eVar.f12837d0;
                PromiseImpl promiseImpl = new PromiseImpl(new com.discord.permissions.c(i6, eVar, str4), new com.discord.permissions.d(i6, eVar));
                synchronized (fVar2) {
                    promiseImpl.resolve(str3);
                }
                return;
            case 27:
                k2.m mVar2 = (k2.m) this.f1988e;
                w3.q qVar = (w3.q) this.f1989i;
                ThreadPoolExecutor threadPoolExecutor = (ThreadPoolExecutor) this.f1990v;
                try {
                    k2.t f10 = tn.g.f(mVar2.a);
                    if (f10 == null) {
                        throw new RuntimeException("EmojiCompat font provider not available on this device.");
                    }
                    k2.s sVar2 = (k2.s) ((k2.i) f10.f13123b);
                    synchronized (sVar2.f13147d) {
                        sVar2.f13149f = threadPoolExecutor;
                    }
                    ((k2.i) f10.f13123b).a(new k2.l(qVar, threadPoolExecutor));
                    return;
                } catch (Throwable th3) {
                    qVar.s(th3);
                    threadPoolExecutor.shutdown();
                    return;
                }
            case 28:
                e4.l lVar2 = (e4.l) this.f1988e;
                final Format format2 = (Format) this.f1989i;
                final DecoderReuseEvaluation decoderReuseEvaluation2 = (DecoderReuseEvaluation) this.f1990v;
                hc.w wVar3 = (hc.w) lVar2.f7960i;
                int i12 = ke.d0.a;
                com.google.android.exoplayer2.d dVar = wVar3.f9929d;
                dVar.N = format2;
                ic.u uVar3 = (ic.u) dVar.f5368q;
                final AnalyticsListener$EventTime j5 = uVar3.j();
                uVar3.k(j5, 1017, new ke.j() { // from class: ic.e
                    @Override // ke.j
                    public final void invoke(Object obj) {
                        b bVar2 = (b) obj;
                        switch (i6) {
                            case 0:
                                AnalyticsListener$EventTime analyticsListener$EventTime = j5;
                                Format format22 = format2;
                                bVar2.onAudioInputFormatChanged(analyticsListener$EventTime, format22);
                                bVar2.onAudioInputFormatChanged(analyticsListener$EventTime, format22, decoderReuseEvaluation2);
                                break;
                            default:
                                AnalyticsListener$EventTime analyticsListener$EventTime2 = j5;
                                Format format3 = format2;
                                bVar2.onVideoInputFormatChanged(analyticsListener$EventTime2, format3);
                                bVar2.onVideoInputFormatChanged(analyticsListener$EventTime2, format3, decoderReuseEvaluation2);
                                break;
                        }
                    }
                });
                return;
            default:
                nc.n nVar = (nc.n) this.f1988e;
                this.f1989i.d(nVar.a, nVar.f15046b, (Exception) this.f1990v);
                return;
        }
    }

    public /* synthetic */ e(bc.b bVar, wb.i iVar, u3.e eVar, wb.h hVar) {
        this.f1987d = 3;
        this.f1988e = bVar;
        this.f1989i = iVar;
        this.f1990v = hVar;
    }

    public /* synthetic */ e(PixelCopyStrategy pixelCopyStrategy, ViewHierarchyNode viewHierarchyNode, View view) {
        this.f1987d = 19;
        this.f1988e = pixelCopyStrategy;
        this.f1990v = viewHierarchyNode;
        this.f1989i = view;
    }

    public /* synthetic */ e(Object obj, Object obj2, Object obj3, int i5) {
        this.f1987d = i5;
        this.f1988e = obj;
        this.f1989i = obj2;
        this.f1990v = obj3;
    }

    public /* synthetic */ e(jl.e eVar, Activity activity, String str, String str2, String str3) {
        this.f1987d = 26;
        this.f1988e = eVar;
        this.f1989i = str;
        this.f1990v = str3;
    }
}
