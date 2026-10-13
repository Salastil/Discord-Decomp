package com.discord.js_watchdog;

import com.discord.crash_reporting.CrashReporting;
import com.discord.logging.Log;
import com.facebook.react.bridge.Promise;
import java.util.Timer;
import java.util.TimerTask;
import ki.b;
import ko.a;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Ref;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.js_watchdog.JSWatchdogManager$ping$1", f = "JSWatchdogManager.kt", l = {}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class JSWatchdogManager$ping$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ boolean $enableTrace;
    final /* synthetic */ Promise $promise;
    final /* synthetic */ boolean $resetTimestamps;
    final /* synthetic */ long $sentTimestamp;
    final /* synthetic */ String $sessionId;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public JSWatchdogManager$ping$1(boolean z5, long j, Promise promise, String str, boolean z6, Continuation continuation) {
        super(2, continuation);
        this.$resetTimestamps = z5;
        this.$sentTimestamp = j;
        this.$promise = promise;
        this.$sessionId = str;
        this.$enableTrace = z6;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new JSWatchdogManager$ping$1(this.$resetTimestamps, this.$sentTimestamp, this.$promise, this.$sessionId, this.$enableTrace, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        Long l6;
        Long l7;
        boolean z5;
        Timer timer;
        a aVar = a.f13464d;
        if (this.label != 0) {
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
        b.R(obj);
        try {
            Ref.BooleanRef booleanRef = new Ref.BooleanRef();
            if (this.$resetTimestamps) {
                JSWatchdogManager.recentPingTS = null;
                JSWatchdogManager.previousPingTS = null;
            }
            l6 = JSWatchdogManager.recentPingTS;
            JSWatchdogManager.previousPingTS = l6;
            JSWatchdogManager.recentPingTS = new Long(this.$sentTimestamp);
            l7 = JSWatchdogManager.previousPingTS;
            if (l7 != null) {
                long j = this.$sentTimestamp;
                String str = this.$sessionId;
                boolean z6 = this.$enableTrace;
                long longValue = (j - l7.longValue()) - 500;
                if (longValue > 1000) {
                    Log.i$default(Log.INSTANCE, JSWatchdogManagerKt.LOG_TAG, "Exceeded JS stall threshold [based on previous ping]: " + longValue, (Throwable) null, 4, (Object) null);
                    booleanRef.element = true;
                    JSWatchdogManager.INSTANCE.saveStallReport((int) longValue, str, z6);
                }
            }
            z5 = JSWatchdogManager.enabled;
            if (z5) {
                timer = JSWatchdogManager.timerInstance;
                final long j5 = this.$sentTimestamp;
                final String str2 = this.$sessionId;
                final boolean z7 = this.$enableTrace;
                TimerTask timerTask = new TimerTask() { // from class: com.discord.js_watchdog.JSWatchdogManager$ping$1$invokeSuspend$$inlined$scheduleAtFixedRate$1
                    @Override // java.util.TimerTask, java.lang.Runnable
                    public void run() {
                        JSWatchdogManager.INSTANCE.updateStallTime(j5, str2, z7);
                    }
                };
                timer.scheduleAtFixedRate(timerTask, 1500L, 1000L);
                JSWatchdogManager.freezeTimer = timerTask;
            }
            this.$promise.resolve(Boolean.valueOf(booleanRef.element));
        } catch (Exception e9) {
            CrashReporting.INSTANCE.captureMessage("Failed to process JSWatchdog ping", e9);
            this.$promise.reject(e9);
        }
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((JSWatchdogManager$ping$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
