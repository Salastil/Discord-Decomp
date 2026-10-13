package cc;

import android.os.Handler;
import android.os.Process;
import com.appsflyer.internal.AFj1rSDK;
import com.discord.chat.presentation.message.view.voicemessages.AudioPlayerModule;
import com.discord.crash_reporting.TelemetryRing;
import com.discord.device.DeviceAccessibilityModule;
import com.discord.jank_stats.JankSessionRecorder;
import com.discord.tti_manager.TTIManagerModule;
import com.facebook.common.references.CloseableReference;
import com.facebook.react.ReactInstanceManager;
import com.facebook.react.runtime.ReactHostImpl;
import com.google.android.datatransport.runtime.scheduling.jobscheduling.AlarmManagerSchedulerBroadcastReceiver;
import com.swmansion.reanimated.ReanimatedModule;
import io.sentry.android.ndk.SentryNdk;
import java.util.Collection;
import java.util.Date;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import org.webrtc.EglBase10Impl;
import org.webrtc.EglBase14Impl;

/* loaded from: classes3.dex */
public final /* synthetic */ class a implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3366d;

    public /* synthetic */ a(int i5) {
        this.f3366d = i5;
    }

    private final void a() {
    }

    private final void b() {
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f3366d) {
            case 0:
                int i5 = AlarmManagerSchedulerBroadcastReceiver.a;
                return;
            case 1:
                AFj1rSDK.getMonetizationNetwork();
                return;
            case 2:
                AudioPlayerModule.maybePlayCurrentPlayer$lambda$1();
                return;
            case 3:
                TelemetryRing.clear$lambda$9();
                return;
            case 4:
                TelemetryRing.scheduleFlush$lambda$11();
                return;
            case 5:
                JankSessionRecorder.recordFrame$lambda$6();
                return;
            case 6:
                JankSessionRecorder.onTrackingDisabled$lambda$23();
                return;
            case 7:
                TTIManagerModule.freezeNavigationTTIDebuggerAfterNextFrame$lambda$7();
                return;
            case 8:
                ReactInstanceManager.lambda$setupReactContext$4();
                return;
            case 9:
                Process.setThreadPriority(0);
                return;
            case 10:
                ReactHostImpl.getOrCreateReactInstanceTask$lambda$45$lambda$41$lambda$40();
                return;
            case 11:
                ReanimatedModule.lambda$new$1();
                return;
            case 12:
                return;
            case 13:
                io.sentry.android.core.internal.util.e.f11222b = Process.myTid();
                return;
            case 14:
                SentryNdk.lambda$static$0();
                return;
            case 15:
                EglBase10Impl.EglConnection.lambda$new$1();
                return;
            case 16:
                EglBase14Impl.EglConnection.lambda$new$1();
                return;
            case 17:
                DeviceAccessibilityModule.disableFocusLock$lambda$3();
                return;
            case 18:
                ConcurrentHashMap concurrentHashMap = r9.b.f17153d;
                float andSet = r9.b.a.getAndSet(0);
                float andSet2 = r9.b.f17151b.getAndSet(0);
                float andSet3 = r9.b.f17152c.getAndSet(0);
                float f2 = andSet + andSet2 + andSet3;
                if (f2 > 0.0f) {
                    float f10 = andSet / f2;
                    float f11 = andSet3 / f2;
                    if (andSet2 / f2 > 0.25f || f11 > 0.1f) {
                        for (Map.Entry entry : concurrentHashMap.entrySet()) {
                            r9.b.a((p9.e) entry.getKey(), -((Number) entry.getValue()).intValue());
                        }
                    } else if (f10 > 0.98f) {
                        for (Map.Entry entry2 : concurrentHashMap.entrySet()) {
                            r9.b.a((p9.e) entry2.getKey(), ((Number) entry2.getValue()).intValue());
                        }
                    }
                    concurrentHashMap.clear();
                }
                ((Handler) r9.b.f17154e.getValue()).postDelayed(r9.b.f17155f, 2000L);
                return;
            case 19:
                long currentTimeMillis = System.currentTimeMillis() - 10000;
                ConcurrentHashMap concurrentHashMap2 = r9.e.f17167d;
                Date until = new Date(currentTimeMillis);
                Intrinsics.checkNotNullParameter(until, "until");
                ConcurrentHashMap concurrentHashMap3 = r9.e.f17167d;
                synchronized (concurrentHashMap3) {
                    try {
                        LinkedHashMap linkedHashMap = new LinkedHashMap();
                        for (Map.Entry entry3 : concurrentHashMap3.entrySet()) {
                            if (((r9.g) entry3.getValue()).f17174b.compareTo(until) < 0) {
                                linkedHashMap.put(entry3.getKey(), entry3.getValue());
                            }
                        }
                        for (Map.Entry entry4 : linkedHashMap.entrySet()) {
                            r9.d dVar = ((r9.g) entry4.getValue()).a;
                            ConcurrentHashMap concurrentHashMap4 = dVar.f17162f;
                            Collection values = concurrentHashMap4.values();
                            Intrinsics.checkNotNullExpressionValue(values, "<get-values>(...)");
                            Iterator it = values.iterator();
                            while (it.hasNext()) {
                                CloseableReference.l(((r9.c) it.next()).a);
                            }
                            concurrentHashMap4.clear();
                            dVar.j = -1;
                            r9.e.f17167d.remove(entry4.getKey());
                        }
                        Unit unit = Unit.a;
                    } catch (Throwable th2) {
                        throw th2;
                    }
                }
                ((Handler) r9.b.f17154e.getValue()).postDelayed(r9.b.f17156g, 10000L);
                return;
            default:
                return;
        }
    }
}
