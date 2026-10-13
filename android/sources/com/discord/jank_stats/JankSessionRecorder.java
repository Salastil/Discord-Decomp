package com.discord.jank_stats;

import android.content.Context;
import android.content.SharedPreferences;
import android.os.Process;
import android.os.SystemClock;
import androidx.lifecycle.c0;
import com.discord.client_info.ClientInfo;
import com.discord.crash_reporting.OnCrashRegistry;
import com.discord.crash_reporting.c;
import com.discord.jank_stats.JankRecordStore;
import com.discord.logging.Log;
import fo.l;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.atomic.AtomicLong;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.m0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.LongCompanionObject;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.StringsKt;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\u0086\u0001\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\t\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\b\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u001d\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010 \n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\"\n\u0002\b\u0002\bÆ\u0002\u0018\u00002\u00020\u0001:\u0001`B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010.\u001a\u00020/2\u0006\u00100\u001a\u000201J\u000e\u00102\u001a\u00020/2\u0006\u00103\u001a\u00020\u0016J\u0006\u00104\u001a\u00020\u0016J\u0016\u00105\u001a\u00020/2\u0006\u00106\u001a\u00020\u00162\u0006\u00107\u001a\u00020\tJ\u0018\u00108\u001a\u00020/2\u0006\u00106\u001a\u00020\u00162\u0006\u00107\u001a\u00020\tH\u0002J\u0010\u00109\u001a\u00020\u00162\u0006\u0010:\u001a\u00020\tH\u0002J\u0016\u0010;\u001a\u00020/2\u0006\u0010<\u001a\u00020\u00052\u0006\u0010=\u001a\u00020\u0005J\u000e\u0010>\u001a\u00020/2\u0006\u0010=\u001a\u00020\u0005J\u000e\u0010?\u001a\u00020/2\u0006\u0010<\u001a\u00020\u0005J\u0006\u0010@\u001a\u00020/J\u000e\u0010A\u001a\u00020/2\u0006\u0010<\u001a\u00020\u0005J\u0010\u0010B\u001a\u00020/2\u0006\u0010<\u001a\u00020\u0005H\u0002J\b\u0010C\u001a\u00020/H\u0002J\u0006\u0010'\u001a\u00020\u0005J\b\u0010D\u001a\u00020/H\u0002J\b\u0010E\u001a\u00020/H\u0002J\b\u0010F\u001a\u00020/H\u0002J\u0010\u0010G\u001a\u00020#2\u0006\u0010=\u001a\u00020\u0005H\u0002J\u0010\u0010H\u001a\u00020/2\u0006\u0010<\u001a\u00020\u0005H\u0002J \u0010I\u001a\u00020/2\u0006\u0010J\u001a\u00020#2\u0006\u0010<\u001a\u00020\u00052\u0006\u0010=\u001a\u00020\u0005H\u0002J\b\u0010K\u001a\u00020/H\u0002J\b\u0010L\u001a\u00020/H\u0002J\b\u0010M\u001a\u00020/H\u0002J\b\u0010N\u001a\u00020OH\u0002J\b\u0010P\u001a\u00020OH\u0002J\b\u0010Q\u001a\u00020OH\u0002J\u000e\u0010R\u001a\b\u0012\u0004\u0012\u00020-0SH\u0002J\u000e\u0010T\u001a\u00020/2\u0006\u0010U\u001a\u00020\u0005J\u0006\u0010V\u001a\u00020/J\b\u0010W\u001a\u00020/H\u0002J\b\u0010X\u001a\u00020/H\u0002J \u0010Y\u001a\u00020/2\u0018\u0010Z\u001a\u0014\u0012\n\u0012\b\u0012\u0004\u0012\u00020\\0S\u0012\u0004\u0012\u00020/0[J\u0014\u0010]\u001a\u00020/2\f\u0010^\u001a\b\u0012\u0004\u0012\u00020\u00050_R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\tX\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\tX\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\tX\u0082T¢\u0006\u0002\n\u0000R#\u0010\f\u001a\n \u000e*\u0004\u0018\u00010\r0\r8BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b\u0011\u0010\u0012\u001a\u0004\b\u000f\u0010\u0010R\u0010\u0010\u0013\u001a\u0004\u0018\u00010\u0014X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0015\u001a\u00020\u0016X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0017\u001a\u00020\u0016X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0018\u001a\u00020\tX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0019\u001a\u00020\tX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u001a\u001a\u00020\u0001X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u001b\u001a\u00020\u001cX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u001d\u001a\u00020\u001cX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u001e\u001a\u00020\u001cX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u001f\u001a\u00020\u001cX\u0082\u0004¢\u0006\u0002\n\u0000R*\u0010 \u001a\u001e\u0012\u0004\u0012\u00020\"\u0012\u0004\u0012\u00020#0!j\u000e\u0012\u0004\u0012\u00020\"\u0012\u0004\u0012\u00020#`$X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010%\u001a\u00020#X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010&\u001a\u00020\u0005X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010'\u001a\u00020\u0005X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010(\u001a\u00020\u0016X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010)\u001a\u00020#X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010*\u001a\u00020#X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010+\u001a\u00020\tX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010,\u001a\u00020-X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006a"}, d2 = {"Lcom/discord/jank_stats/JankSessionRecorder;", "", "<init>", "()V", "LOG_TAG", "", "PREFS_NAME_PENDING", "PREFS_NAME_LIVE", "FIRST_FLUSH_DELAY_MS", "", "FLUSH_INTERVAL_MS", "PENDING_NAME_GRACE_MS", "flushExecutor", "Ljava/util/concurrent/ExecutorService;", "kotlin.jvm.PlatformType", "getFlushExecutor", "()Ljava/util/concurrent/ExecutorService;", "flushExecutor$delegate", "Lkotlin/Lazy;", "store", "Lcom/discord/jank_stats/JankRecordStore;", "initStarted", "", "perScreenEnabled", "sessionStartWallMs", "nextFlushAtMs", "segmentLock", "totalFrames", "Ljava/util/concurrent/atomic/AtomicLong;", "jankFrames", "totalFrameTimeNanos", "jankTimeNanos", "buckets", "Ljava/util/HashMap;", "Lcom/discord/jank_stats/ScreenContext;", "Lcom/discord/jank_stats/JankSessionRecorder$Counts;", "Lkotlin/collections/HashMap;", "openCounts", "openScreen", "openInteraction", "openNamed", "pendingTransition", "pendingNone", "pendingSinceUptimeMs", "emptySegment", "Lcom/discord/jank_stats/ScreenJankBucket;", "init", "", "context", "Landroid/content/Context;", "setPerScreenExperiment", "isEnabled", "isPerScreenEnabled", "recordFrame", "isJank", "totalDurationNanos", "countFrame", "takeFlushDeadline", "nowMs", "openSegment", "screen", "interaction", "openSegmentKeepingLabel", "renameOpenSegment", "settleOpenSegment", "renameAndSettleOpenSegment", "renameLocked", "settleLocked", "closeOpenSegment", "closeOrParkOpenSegment", "parkOpenSegment", "pendingSlot", "filePending", "filePendingSlot", "counts", "abandonPending", "abandonStalePending", "closeSettledOpenSegment", "snapshotSession", "Lcom/discord/jank_stats/JankSessionSnapshot;", "snapshotAndRotate", "buildSnapshot", "bucketList", "", "hydrateLaunchId", "launchId", "onTrackingDisabled", "flushSession", "flushNow", "pendingRecords", "onResult", "Lkotlin/Function1;", "Lcom/discord/jank_stats/JankRecordStore$PendingRecord;", "acknowledge", "sessionIds", "", "Counts", "jank_stats_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nJankSessionRecorder.kt\nKotlin\n*S Kotlin\n*F\n+ 1 JankSessionRecorder.kt\ncom/discord/jank_stats/JankSessionRecorder\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n+ 3 Maps.kt\nkotlin/collections/MapsKt__MapsKt\n+ 4 _Maps.kt\nkotlin/collections/MapsKt___MapsKt\n*L\n1#1,488:1\n1#2:489\n384#3,7:490\n384#3,7:497\n126#4:504\n153#4,3:505\n*S KotlinDebug\n*F\n+ 1 JankSessionRecorder.kt\ncom/discord/jank_stats/JankSessionRecorder\n*L\n318#1:490,7\n355#1:497,7\n424#1:504\n424#1:505,3\n*E\n"})
/* loaded from: classes.dex */
public final class JankSessionRecorder {
    private static final long FIRST_FLUSH_DELAY_MS = 5000;
    private static final long FLUSH_INTERVAL_MS = 30000;

    @NotNull
    private static final String LOG_TAG = "JankSessionRecorder";
    private static final long PENDING_NAME_GRACE_MS = 2000;

    @NotNull
    private static final String PREFS_NAME_LIVE = "jank_session_live";

    @NotNull
    private static final String PREFS_NAME_PENDING = "jank_session";
    private static volatile boolean initStarted;
    private static long pendingSinceUptimeMs;
    private static volatile boolean perScreenEnabled;
    private static long sessionStartWallMs;
    private static volatile JankRecordStore store;

    @NotNull
    public static final JankSessionRecorder INSTANCE = new JankSessionRecorder();

    /* renamed from: flushExecutor$delegate, reason: from kotlin metadata */
    @NotNull
    private static final Lazy flushExecutor = l.a(new com.discord.chat.reactevents.a(17));
    private static volatile long nextFlushAtMs = LongCompanionObject.MAX_VALUE;

    @NotNull
    private static final Object segmentLock = new Object();

    @NotNull
    private static final AtomicLong totalFrames = new AtomicLong();

    @NotNull
    private static final AtomicLong jankFrames = new AtomicLong();

    @NotNull
    private static final AtomicLong totalFrameTimeNanos = new AtomicLong();

    @NotNull
    private static final AtomicLong jankTimeNanos = new AtomicLong();

    @NotNull
    private static final HashMap<ScreenContext, Counts> buckets = new HashMap<>();

    @NotNull
    private static final Counts openCounts = new Counts();

    @NotNull
    private static String openScreen = JankScreenContext.UNKNOWN_SCREEN;

    @NotNull
    private static String openInteraction = "none";
    private static boolean openNamed = true;

    @NotNull
    private static final Counts pendingTransition = new Counts();

    @NotNull
    private static final Counts pendingNone = new Counts();

    @NotNull
    private static final ScreenJankBucket emptySegment = new ScreenJankBucket(JankScreenContext.UNKNOWN_SCREEN, "none", 0, 0, 0, 0);

    @Metadata(d1 = {"\u00008\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\b\n\u0002\u0010\t\n\u0002\b\b\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\b\u0002\u0018\u00002\u00020\u0001B\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\u0006\u0010\u0016\u001a\u00020\u0017J\u0006\u0010\u0018\u001a\u00020\u0019J\u000e\u0010\u001a\u001a\u00020\u00192\u0006\u0010\u001b\u001a\u00020\u0000J\u0016\u0010\u001c\u001a\u00020\u001d2\u0006\u0010\u001e\u001a\u00020\u001f2\u0006\u0010 \u001a\u00020\u001fR\u001a\u0010\u0004\u001a\u00020\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0006\u0010\u0007\"\u0004\b\b\u0010\tR\u001a\u0010\n\u001a\u00020\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u000b\u0010\u0007\"\u0004\b\f\u0010\tR\u001a\u0010\r\u001a\u00020\u000eX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u000f\u0010\u0010\"\u0004\b\u0011\u0010\u0012R\u001a\u0010\u0013\u001a\u00020\u000eX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0014\u0010\u0010\"\u0004\b\u0015\u0010\u0012¨\u0006!"}, d2 = {"Lcom/discord/jank_stats/JankSessionRecorder$Counts;", "", "<init>", "()V", "numFrames", "", "getNumFrames", "()I", "setNumFrames", "(I)V", "numJankFrames", "getNumJankFrames", "setNumJankFrames", "jankTimeNanos", "", "getJankTimeNanos", "()J", "setJankTimeNanos", "(J)V", "totalFrameTimeNanos", "getTotalFrameTimeNanos", "setTotalFrameTimeNanos", "isEmpty", "", "reset", "", "add", JankRecordStore.SCREEN_OTHER, "toBucket", "Lcom/discord/jank_stats/ScreenJankBucket;", "screen", "", "interaction", "jank_stats_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Counts {
        private long jankTimeNanos;
        private int numFrames;
        private int numJankFrames;
        private long totalFrameTimeNanos;

        public final void add(@NotNull Counts other) {
            Intrinsics.checkNotNullParameter(other, "other");
            this.numFrames += other.numFrames;
            this.numJankFrames += other.numJankFrames;
            this.jankTimeNanos += other.jankTimeNanos;
            this.totalFrameTimeNanos += other.totalFrameTimeNanos;
        }

        public final long getJankTimeNanos() {
            return this.jankTimeNanos;
        }

        public final int getNumFrames() {
            return this.numFrames;
        }

        public final int getNumJankFrames() {
            return this.numJankFrames;
        }

        public final long getTotalFrameTimeNanos() {
            return this.totalFrameTimeNanos;
        }

        public final boolean isEmpty() {
            return this.numFrames == 0;
        }

        public final void reset() {
            this.numFrames = 0;
            this.numJankFrames = 0;
            this.jankTimeNanos = 0L;
            this.totalFrameTimeNanos = 0L;
        }

        public final void setJankTimeNanos(long j) {
            this.jankTimeNanos = j;
        }

        public final void setNumFrames(int i5) {
            this.numFrames = i5;
        }

        public final void setNumJankFrames(int i5) {
            this.numJankFrames = i5;
        }

        public final void setTotalFrameTimeNanos(long j) {
            this.totalFrameTimeNanos = j;
        }

        @NotNull
        public final ScreenJankBucket toBucket(@NotNull String screen, @NotNull String interaction) {
            Intrinsics.checkNotNullParameter(screen, "screen");
            Intrinsics.checkNotNullParameter(interaction, "interaction");
            return new ScreenJankBucket(screen, interaction, this.numFrames, this.numJankFrames, this.jankTimeNanos, this.totalFrameTimeNanos);
        }
    }

    private JankSessionRecorder() {
    }

    private final void abandonPending() {
        filePending(JankScreenContext.UNKNOWN_SCREEN);
    }

    private final void abandonStalePending() {
        long j = pendingSinceUptimeMs;
        if (j == 0 || SystemClock.uptimeMillis() - j < PENDING_NAME_GRACE_MS) {
            return;
        }
        abandonPending();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void acknowledge$lambda$25(Set set) {
        JankRecordStore jankRecordStore = store;
        if (jankRecordStore != null) {
            jankRecordStore.ack(set);
        }
    }

    private final List<ScreenJankBucket> bucketList() {
        HashMap<ScreenContext, Counts> hashMap = buckets;
        ArrayList arrayList = new ArrayList(hashMap.size());
        for (Map.Entry<ScreenContext, Counts> entry : hashMap.entrySet()) {
            ScreenContext key = entry.getKey();
            arrayList.add(entry.getValue().toBucket(key.getScreen(), key.getInteraction()));
        }
        return arrayList;
    }

    private final JankSessionSnapshot buildSnapshot() {
        return new JankSessionSnapshot(totalFrames.get(), jankFrames.get(), totalFrameTimeNanos.get(), jankTimeNanos.get(), bucketList(), pendingTransition.getNumFrames() + pendingNone.getNumFrames(), openCounts.toBucket(openScreen, openInteraction));
    }

    private final void closeOpenSegment() {
        Counts counts = openCounts;
        if (counts.isEmpty()) {
            return;
        }
        HashMap<ScreenContext, Counts> hashMap = buckets;
        ScreenContext screenContext = new ScreenContext(openScreen, openInteraction);
        Counts counts2 = hashMap.get(screenContext);
        if (counts2 == null) {
            counts2 = new Counts();
            hashMap.put(screenContext, counts2);
        }
        counts2.add(counts);
        counts.reset();
    }

    private final void closeOrParkOpenSegment() {
        if (openNamed) {
            closeOpenSegment();
        } else {
            parkOpenSegment();
        }
    }

    private final void closeSettledOpenSegment() {
        if (openNamed) {
            closeOpenSegment();
        }
    }

    private final void countFrame(boolean isJank, long totalDurationNanos) {
        totalFrames.incrementAndGet();
        totalFrameTimeNanos.addAndGet(totalDurationNanos);
        if (isJank) {
            jankFrames.incrementAndGet();
            jankTimeNanos.addAndGet(totalDurationNanos);
        }
    }

    private final void filePending(String screen) {
        filePendingSlot(pendingTransition, screen, JankScreenContext.INTERACTION_TRANSITION);
        filePendingSlot(pendingNone, screen, "none");
        pendingSinceUptimeMs = 0L;
    }

    private final void filePendingSlot(Counts counts, String screen, String interaction) {
        if (counts.isEmpty()) {
            return;
        }
        HashMap<ScreenContext, Counts> hashMap = buckets;
        ScreenContext screenContext = new ScreenContext(screen, interaction);
        Counts counts2 = hashMap.get(screenContext);
        if (counts2 == null) {
            counts2 = new Counts();
            hashMap.put(screenContext, counts2);
        }
        counts2.add(counts);
        counts.reset();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final ExecutorService flushExecutor_delegate$lambda$2() {
        return Executors.newSingleThreadExecutor(new c(1));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Thread flushExecutor_delegate$lambda$2$lambda$1(Runnable runnable) {
        return new Thread(new c0(10, runnable), "JankSessionFlush");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void flushExecutor_delegate$lambda$2$lambda$1$lambda$0(Runnable runnable) {
        Process.setThreadPriority(10);
        runnable.run();
    }

    private final void flushNow() {
        JankRecordStore jankRecordStore = store;
        if (jankRecordStore == null) {
            return;
        }
        jankRecordStore.tryFlush(snapshotSession());
    }

    private final void flushSession() {
        JankRecordStore jankRecordStore = store;
        if (jankRecordStore == null) {
            return;
        }
        jankRecordStore.flush(snapshotSession());
    }

    private final ExecutorService getFlushExecutor() {
        return (ExecutorService) flushExecutor.getValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void hydrateLaunchId$lambda$22(String str) {
        JankRecordStore jankRecordStore = store;
        if (jankRecordStore == null) {
            return;
        }
        String currentSessionId = jankRecordStore.currentSessionId();
        if (Intrinsics.areEqual(currentSessionId, str)) {
            return;
        }
        JankSessionSnapshot snapshotAndRotate = currentSessionId == null ? null : INSTANCE.snapshotAndRotate();
        long j = sessionStartWallMs;
        ClientInfo clientInfo = ClientInfo.INSTANCE;
        Integer intOrNull = StringsKt.toIntOrNull(clientInfo.getVersionCode());
        jankRecordStore.hydrate(new JankRecordStore.SessionIdentity(str, j, intOrNull != null ? intOrNull.intValue() : 0, clientInfo.getReleaseChannel()), snapshotAndRotate);
        sessionStartWallMs = System.currentTimeMillis();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void init$lambda$4(Context context, long j, long j5) {
        JankRecordStore.Companion companion = JankRecordStore.INSTANCE;
        SharedPreferences sharedPreferences = context.getSharedPreferences(PREFS_NAME_LIVE, 0);
        Intrinsics.checkNotNullExpressionValue(sharedPreferences, "getSharedPreferences(...)");
        SharedPreferencesJankKeyValueStore sharedPreferencesJankKeyValueStore = new SharedPreferencesJankKeyValueStore(sharedPreferences);
        SharedPreferences sharedPreferences2 = context.getSharedPreferences(PREFS_NAME_PENDING, 0);
        Intrinsics.checkNotNullExpressionValue(sharedPreferences2, "getSharedPreferences(...)");
        JankRecordStore open$jank_stats_release = companion.open$jank_stats_release(sharedPreferencesJankKeyValueStore, new SharedPreferencesJankKeyValueStore(sharedPreferences2));
        sessionStartWallMs = j;
        store = open$jank_stats_release;
        nextFlushAtMs = FIRST_FLUSH_DELAY_MS + j5;
        OnCrashRegistry.INSTANCE.register(LOG_TAG, new com.discord.chat.reactevents.a(18));
        Log.i$default(Log.INSTANCE, LOG_TAG, "Jank recording started after " + (SystemClock.uptimeMillis() - j5) + "ms, " + open$jank_stats_release.pending().size() + " record(s) awaiting delivery.", (Throwable) null, 4, (Object) null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit init$lambda$4$lambda$3() {
        INSTANCE.flushNow();
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void onTrackingDisabled$lambda$23() {
        INSTANCE.flushSession();
    }

    private final void parkOpenSegment() {
        Counts counts = openCounts;
        if (counts.isEmpty()) {
            return;
        }
        pendingSlot(openInteraction).add(counts);
        if (pendingSinceUptimeMs == 0) {
            pendingSinceUptimeMs = SystemClock.uptimeMillis();
        }
        counts.reset();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void pendingRecords$lambda$24(Function1 function1) {
        List<JankRecordStore.PendingRecord> list;
        JankRecordStore jankRecordStore = store;
        if (jankRecordStore == null || (list = jankRecordStore.pending()) == null) {
            list = m0.f13512d;
        }
        function1.invoke(list);
    }

    private final Counts pendingSlot(String interaction) {
        return Intrinsics.areEqual(interaction, JankScreenContext.INTERACTION_TRANSITION) ? pendingTransition : pendingNone;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void recordFrame$lambda$6() {
        INSTANCE.flushSession();
    }

    private final void renameLocked(String screen) {
        if (screen.length() == 0) {
            screen = JankScreenContext.UNKNOWN_SCREEN;
        }
        openNamed = true;
        if (pendingTransition.getNumFrames() + pendingNone.getNumFrames() > 0) {
            filePending(screen);
        }
        openScreen = screen;
    }

    private final void settleLocked() {
        closeOrParkOpenSegment();
        openInteraction = "none";
    }

    private final JankSessionSnapshot snapshotAndRotate() {
        JankSessionSnapshot jankSessionSnapshot;
        synchronized (segmentLock) {
            JankSessionRecorder jankSessionRecorder = INSTANCE;
            jankSessionRecorder.abandonPending();
            jankSessionRecorder.closeSettledOpenSegment();
            Counts counts = openCounts;
            long numFrames = counts.getNumFrames();
            long numJankFrames = counts.getNumJankFrames();
            long totalFrameTimeNanos2 = counts.getTotalFrameTimeNanos();
            long jankTimeNanos2 = counts.getJankTimeNanos();
            jankSessionSnapshot = new JankSessionSnapshot(totalFrames.getAndSet(numFrames) - numFrames, jankFrames.getAndSet(numJankFrames) - numJankFrames, totalFrameTimeNanos.getAndSet(totalFrameTimeNanos2) - totalFrameTimeNanos2, jankTimeNanos.getAndSet(jankTimeNanos2) - jankTimeNanos2, jankSessionRecorder.bucketList(), 0, emptySegment);
            buckets.clear();
        }
        return jankSessionSnapshot;
    }

    private final JankSessionSnapshot snapshotSession() {
        JankSessionSnapshot buildSnapshot;
        synchronized (segmentLock) {
            JankSessionRecorder jankSessionRecorder = INSTANCE;
            jankSessionRecorder.abandonStalePending();
            jankSessionRecorder.closeSettledOpenSegment();
            buildSnapshot = jankSessionRecorder.buildSnapshot();
        }
        return buildSnapshot;
    }

    private final boolean takeFlushDeadline(long nowMs) {
        if (nowMs < nextFlushAtMs) {
            return false;
        }
        nextFlushAtMs = nowMs + FLUSH_INTERVAL_MS;
        return true;
    }

    public final void acknowledge(@NotNull Set<String> sessionIds) {
        Intrinsics.checkNotNullParameter(sessionIds, "sessionIds");
        getFlushExecutor().execute(new c0(11, sessionIds));
    }

    public final void hydrateLaunchId(@NotNull String launchId) {
        Intrinsics.checkNotNullParameter(launchId, "launchId");
        getFlushExecutor().execute(new cb.a(launchId, 1));
    }

    public final void init(@NotNull Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        if (initStarted) {
            return;
        }
        initStarted = true;
        final long currentTimeMillis = System.currentTimeMillis();
        final long uptimeMillis = SystemClock.uptimeMillis();
        final Context applicationContext = context.getApplicationContext();
        getFlushExecutor().execute(new Runnable() { // from class: com.discord.jank_stats.b
            @Override // java.lang.Runnable
            public final void run() {
                JankSessionRecorder.init$lambda$4(applicationContext, currentTimeMillis, uptimeMillis);
            }
        });
    }

    public final boolean isPerScreenEnabled() {
        return perScreenEnabled;
    }

    public final void onTrackingDisabled() {
        if (store == null) {
            return;
        }
        getFlushExecutor().execute(new cc.a(6));
    }

    @NotNull
    public final String openInteraction() {
        String str;
        synchronized (segmentLock) {
            str = openInteraction;
        }
        return str;
    }

    public final void openSegment(@NotNull String screen, @NotNull String interaction) {
        Intrinsics.checkNotNullParameter(screen, "screen");
        Intrinsics.checkNotNullParameter(interaction, "interaction");
        synchronized (segmentLock) {
            try {
                INSTANCE.closeOrParkOpenSegment();
                if (screen.length() == 0) {
                    screen = JankScreenContext.UNKNOWN_SCREEN;
                }
                openScreen = screen;
                if (interaction.length() == 0) {
                    interaction = "none";
                }
                openInteraction = interaction;
                openNamed = true;
                Unit unit = Unit.a;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public final void openSegmentKeepingLabel(@NotNull String interaction) {
        Intrinsics.checkNotNullParameter(interaction, "interaction");
        synchronized (segmentLock) {
            try {
                if (interaction.length() == 0) {
                    interaction = "none";
                }
                if (openNamed) {
                    INSTANCE.closeOpenSegment();
                    openNamed = false;
                } else if (!Intrinsics.areEqual(interaction, openInteraction)) {
                    INSTANCE.parkOpenSegment();
                }
                openInteraction = interaction;
                Unit unit = Unit.a;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public final void pendingRecords(@NotNull Function1<? super List<JankRecordStore.PendingRecord>, Unit> onResult) {
        Intrinsics.checkNotNullParameter(onResult, "onResult");
        getFlushExecutor().execute(new com.appsflyer.a(onResult, 1));
    }

    public final void recordFrame(boolean isJank, long totalDurationNanos) {
        if (perScreenEnabled) {
            synchronized (segmentLock) {
                try {
                    INSTANCE.countFrame(isJank, totalDurationNanos);
                    Counts counts = openCounts;
                    counts.setNumFrames(counts.getNumFrames() + 1);
                    counts.setTotalFrameTimeNanos(counts.getTotalFrameTimeNanos() + totalDurationNanos);
                    if (isJank) {
                        counts.setNumJankFrames(counts.getNumJankFrames() + 1);
                        counts.setJankTimeNanos(counts.getJankTimeNanos() + totalDurationNanos);
                    }
                    Unit unit = Unit.a;
                } catch (Throwable th2) {
                    throw th2;
                }
            }
        } else {
            countFrame(isJank, totalDurationNanos);
        }
        if (takeFlushDeadline(SystemClock.uptimeMillis())) {
            getFlushExecutor().execute(new cc.a(5));
        }
    }

    public final void renameAndSettleOpenSegment(@NotNull String screen) {
        Intrinsics.checkNotNullParameter(screen, "screen");
        synchronized (segmentLock) {
            JankSessionRecorder jankSessionRecorder = INSTANCE;
            jankSessionRecorder.renameLocked(screen);
            jankSessionRecorder.settleLocked();
            Unit unit = Unit.a;
        }
    }

    public final void renameOpenSegment(@NotNull String screen) {
        Intrinsics.checkNotNullParameter(screen, "screen");
        synchronized (segmentLock) {
            INSTANCE.renameLocked(screen);
            Unit unit = Unit.a;
        }
    }

    public final void setPerScreenExperiment(boolean isEnabled) {
        perScreenEnabled = isEnabled;
    }

    public final void settleOpenSegment() {
        synchronized (segmentLock) {
            INSTANCE.settleLocked();
            Unit unit = Unit.a;
        }
    }
}
