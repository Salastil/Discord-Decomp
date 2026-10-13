package com.discord.jank_stats;

import a3.e;
import com.discord.jank_stats.JankRecordStore;
import com.facebook.react.animated.InterpolationAnimatedNode;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.locks.ReentrantLock;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.c0;
import kotlin.collections.d0;
import kotlin.collections.u0;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.x;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000f\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0005\n\u0002\u0010\u001e\n\u0002\b\u0002\n\u0002\u0010%\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0010 \n\u0002\b\u0002\n\u0002\u0010\"\n\u0002\b\u0004\u0018\u0000 ,2\u00020\u0001:\u0003*+,B\u0019\b\u0002\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003¢\u0006\u0004\b\u0005\u0010\u0006J\b\u0010\u0010\u001a\u00020\u0011H\u0002J\u001a\u0010\u0012\u001a\u0004\u0018\u00010\f2\u0006\u0010\u0013\u001a\u00020\u000b2\u0006\u0010\u0014\u001a\u00020\u000bH\u0002J\u0016\u0010\u0015\u001a\u00020\u00112\f\u0010\u0016\u001a\b\u0012\u0004\u0012\u00020\u000b0\u0017H\u0002J\u001e\u0010\u0018\u001a\u00020\u00112\u0014\u0010\u0019\u001a\u0010\u0012\u0004\u0012\u00020\u000b\u0012\u0006\u0012\u0004\u0018\u00010\u000b0\u001aH\u0002J\b\u0010\u001b\u001a\u0004\u0018\u00010\u000bJ\u0018\u0010\u001c\u001a\u00020\u001d2\u0006\u0010\u000e\u001a\u00020\u000f2\b\u0010\u001e\u001a\u0004\u0018\u00010\u001fJ\u000e\u0010 \u001a\u00020\u001d2\u0006\u0010!\u001a\u00020\u001fJ\u000e\u0010\"\u001a\u00020\u001d2\u0006\u0010!\u001a\u00020\u001fJ\u0010\u0010#\u001a\u00020\u001d2\u0006\u0010!\u001a\u00020\u001fH\u0002J\u0018\u0010$\u001a\u00020\f2\u0006\u0010\u000e\u001a\u00020\u000f2\u0006\u0010!\u001a\u00020\u001fH\u0002J\f\u0010%\u001a\b\u0012\u0004\u0012\u00020\f0&J\u0014\u0010'\u001a\u00020\u00112\f\u0010(\u001a\b\u0012\u0004\u0012\u00020\u000b0)R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\bX\u0082\u0004¢\u0006\u0002\n\u0000R*\u0010\t\u001a\u001e\u0012\u0004\u0012\u00020\u000b\u0012\u0004\u0012\u00020\f0\nj\u000e\u0012\u0004\u0012\u00020\u000b\u0012\u0004\u0012\u00020\f`\rX\u0082\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\u000e\u001a\u0004\u0018\u00010\u000fX\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006-"}, d2 = {"Lcom/discord/jank_stats/JankRecordStore;", "", "liveStore", "Lcom/discord/jank_stats/JankKeyValueStore;", "pendingStore", "<init>", "(Lcom/discord/jank_stats/JankKeyValueStore;Lcom/discord/jank_stats/JankKeyValueStore;)V", "lock", "Ljava/util/concurrent/locks/ReentrantLock;", "inherited", "Ljava/util/LinkedHashMap;", "", "Lcom/discord/jank_stats/JankRecordStore$PendingRecord;", "Lkotlin/collections/LinkedHashMap;", InterpolationAnimatedNode.EXTRAPOLATE_TYPE_IDENTITY, "Lcom/discord/jank_stats/JankRecordStore$SessionIdentity;", "load", "", "recordUnder", "key", "value", "clearLive", "keys", "", "trimInherited", "changes", "", "currentSessionId", "hydrate", "", "outgoing", "Lcom/discord/jank_stats/JankSessionSnapshot;", "flush", "snapshot", "tryFlush", "flushLocked", "toRecord", "pending", "", "ack", "sessionIds", "", "SessionIdentity", "PendingRecord", "Companion", "jank_stats_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nJankRecordStore.kt\nKotlin\n*S Kotlin\n*F\n+ 1 JankRecordStore.kt\ncom/discord/jank_stats/JankRecordStore\n+ 2 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n+ 3 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,378:1\n2746#2,3:379\n1056#2:382\n1869#2,2:383\n1869#2,2:386\n1869#2,2:388\n774#2:390\n865#2,2:391\n1193#2,2:393\n1267#2,4:395\n1869#2,2:399\n1#3:385\n*S KotlinDebug\n*F\n+ 1 JankRecordStore.kt\ncom/discord/jank_stats/JankRecordStore\n*L\n71#1:379,3\n77#1:382\n77#1:383,2\n95#1:386,2\n102#1:388,2\n191#1:390\n191#1:391,2\n193#1:393,2\n193#1:395,4\n194#1:399,2\n*E\n"})
/* loaded from: classes.dex */
public final class JankRecordStore {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    public static final String KEY_RECORD_PREFIX = "record_";
    public static final int MAX_PENDING_RECORDS = 4;
    private static final int MAX_SCREENS = 50;
    private static final int SCHEMA_VERSION = 2;

    @NotNull
    public static final String SCREEN_OTHER = "other";
    private SessionIdentity identity;

    @NotNull
    private final LinkedHashMap<String, PendingRecord> inherited;

    @NotNull
    private final JankKeyValueStore liveStore;

    @NotNull
    private final ReentrantLock lock;

    @NotNull
    private final JankKeyValueStore pendingStore;

    @Metadata(d1 = {"\u0000B\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\t\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0003\b\u0086\u0003\u0018\u00002\u00020\u0001:\u0001\u001bB\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u001d\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\u0007H\u0000¢\u0006\u0002\b\tJ\u0016\u0010\n\u001a\u00020\u000b2\f\u0010\f\u001a\b\u0012\u0004\u0012\u00020\u000e0\rH\u0002J\u001a\u0010\u000f\u001a\u00020\u000e2\b\u0010\u0010\u001a\u0004\u0018\u00010\u000e2\u0006\u0010\u0011\u001a\u00020\u000eH\u0002J\u0010\u0010\u0012\u001a\u00020\u00132\u0006\u0010\u0011\u001a\u00020\u000eH\u0002R\u000e\u0010\u0014\u001a\u00020\u0015X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0016\u001a\u00020\u0015X\u0080T¢\u0006\u0002\n\u0000R\u000e\u0010\u0017\u001a\u00020\u0015X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0018\u001a\u00020\u0019X\u0080T¢\u0006\u0002\n\u0000R\u000e\u0010\u001a\u001a\u00020\u0019X\u0080T¢\u0006\u0002\n\u0000¨\u0006\u001c"}, d2 = {"Lcom/discord/jank_stats/JankRecordStore$Companion;", "", "<init>", "()V", "open", "Lcom/discord/jank_stats/JankRecordStore;", "liveStore", "Lcom/discord/jank_stats/JankKeyValueStore;", "pendingStore", "open$jank_stats_release", "cap", "Lcom/discord/jank_stats/JankRecordStore$Companion$Capped;", "buckets", "", "Lcom/discord/jank_stats/ScreenJankBucket;", "merge", "into", "bucket", "rank", "", "SCHEMA_VERSION", "", "MAX_PENDING_RECORDS", "MAX_SCREENS", "SCREEN_OTHER", "", "KEY_RECORD_PREFIX", "Capped", "jank_stats_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    @SourceDebugExtension({"SMAP\nJankRecordStore.kt\nKotlin\n*S Kotlin\n*F\n+ 1 JankRecordStore.kt\ncom/discord/jank_stats/JankRecordStore$Companion\n+ 2 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n+ 3 Maps.kt\nkotlin/collections/MapsKt__MapsKt\n*L\n1#1,378:1\n1869#2:379\n1870#2:387\n1068#2:388\n1878#2,2:389\n1869#2,2:391\n1880#2:393\n384#3,7:380\n*S KotlinDebug\n*F\n+ 1 JankRecordStore.kt\ncom/discord/jank_stats/JankRecordStore$Companion\n*L\n224#1:379\n224#1:387\n231#1:388\n235#1:389,2\n239#1:391,2\n235#1:393\n225#1:380,7\n*E\n"})
    public static final class Companion {

        @Metadata(d1 = {"\u0000\u001c\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0007\u0018\u00002\u00020\u0001B\u001d\u0012\f\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0006¢\u0006\u0004\b\u0007\u0010\bR\u0017\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\nR\u0011\u0010\u0005\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\f¨\u0006\r"}, d2 = {"Lcom/discord/jank_stats/JankRecordStore$Companion$Capped;", "", "buckets", "", "Lcom/discord/jank_stats/ScreenJankBucket;", "screensOverCap", "", "<init>", "(Ljava/util/List;I)V", "getBuckets", "()Ljava/util/List;", "getScreensOverCap", "()I", "jank_stats_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
        public static final class Capped {

            @NotNull
            private final List<ScreenJankBucket> buckets;
            private final int screensOverCap;

            public Capped(@NotNull List<ScreenJankBucket> buckets, int i5) {
                Intrinsics.checkNotNullParameter(buckets, "buckets");
                this.buckets = buckets;
                this.screensOverCap = i5;
            }

            @NotNull
            public final List<ScreenJankBucket> getBuckets() {
                return this.buckets;
            }

            public final int getScreensOverCap() {
                return this.screensOverCap;
            }
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        /* JADX INFO: Access modifiers changed from: private */
        public final Capped cap(List<ScreenJankBucket> buckets) {
            LinkedHashMap linkedHashMap = new LinkedHashMap();
            for (ScreenJankBucket screenJankBucket : buckets) {
                String screen = screenJankBucket.getScreen();
                Object obj = linkedHashMap.get(screen);
                if (obj == null) {
                    obj = new ArrayList(2);
                    linkedHashMap.put(screen, obj);
                }
                ((List) obj).add(screenJankBucket);
            }
            int i5 = 0;
            if (linkedHashMap.size() <= 50) {
                return new Capped(buckets, 0);
            }
            Collection values = linkedHashMap.values();
            Intrinsics.checkNotNullExpressionValue(values, "<get-values>(...)");
            List e02 = CollectionsKt.e0(values, new Comparator() { // from class: com.discord.jank_stats.JankRecordStore$Companion$cap$$inlined$sortedByDescending$1
                @Override // java.util.Comparator
                public final int compare(T t5, T t10) {
                    long rank;
                    long rank2;
                    List list = (List) t10;
                    Intrinsics.checkNotNull(list);
                    JankRecordStore.Companion companion = JankRecordStore.INSTANCE;
                    Iterator<T> it = list.iterator();
                    long j = 0;
                    long j5 = 0;
                    while (it.hasNext()) {
                        rank2 = companion.rank((ScreenJankBucket) it.next());
                        j5 += rank2;
                    }
                    Long valueOf = Long.valueOf(j5);
                    List list2 = (List) t5;
                    Intrinsics.checkNotNull(list2);
                    JankRecordStore.Companion companion2 = JankRecordStore.INSTANCE;
                    Iterator<T> it2 = list2.iterator();
                    while (it2.hasNext()) {
                        rank = companion2.rank((ScreenJankBucket) it2.next());
                        j += rank;
                    }
                    return ho.a.a(valueOf, Long.valueOf(j));
                }
            });
            ArrayList arrayList = new ArrayList(buckets.size());
            LinkedHashMap linkedHashMap2 = new LinkedHashMap();
            for (Object obj2 : e02) {
                int i6 = i5 + 1;
                if (i5 < 0) {
                    c0.k();
                    throw null;
                }
                List<ScreenJankBucket> list = (List) obj2;
                if (i5 < 50) {
                    arrayList.addAll(list);
                } else {
                    Intrinsics.checkNotNull(list);
                    for (ScreenJankBucket screenJankBucket2 : list) {
                        linkedHashMap2.put(screenJankBucket2.getInteraction(), JankRecordStore.INSTANCE.merge((ScreenJankBucket) linkedHashMap2.get(screenJankBucket2.getInteraction()), screenJankBucket2));
                    }
                }
                i5 = i6;
            }
            arrayList.addAll(linkedHashMap2.values());
            return new Capped(arrayList, linkedHashMap.size() - 50);
        }

        private final ScreenJankBucket merge(ScreenJankBucket into, ScreenJankBucket bucket) {
            return new ScreenJankBucket(JankRecordStore.SCREEN_OTHER, bucket.getInteraction(), (into != null ? into.getNumFrames() : 0) + bucket.getNumFrames(), bucket.getNumJankFrames() + (into != null ? into.getNumJankFrames() : 0), bucket.getJankTimeNanos() + (into != null ? into.getJankTimeNanos() : 0L), bucket.getTotalFrameTimeNanos() + (into != null ? into.getTotalFrameTimeNanos() : 0L));
        }

        /* JADX INFO: Access modifiers changed from: private */
        public final long rank(ScreenJankBucket bucket) {
            return bucket.getNumFrames();
        }

        @NotNull
        public final JankRecordStore open$jank_stats_release(@NotNull JankKeyValueStore liveStore, @NotNull JankKeyValueStore pendingStore) {
            Intrinsics.checkNotNullParameter(liveStore, "liveStore");
            Intrinsics.checkNotNullParameter(pendingStore, "pendingStore");
            JankRecordStore jankRecordStore = new JankRecordStore(liveStore, pendingStore, null);
            jankRecordStore.load();
            return jankRecordStore;
        }

        private Companion() {
        }
    }

    @Metadata(d1 = {"\u00002\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0010\b\n\u0002\b\u0006\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b \n\u0002\u0010\u000b\n\u0002\b\u0004\b\u0086\b\u0018\u00002\u00020\u0001Be\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\u0003\u0012\u0006\u0010\t\u001a\u00020\u0005\u0012\u0006\u0010\n\u001a\u00020\u0005\u0012\u0006\u0010\u000b\u001a\u00020\u0005\u0012\u0006\u0010\f\u001a\u00020\u0005\u0012\f\u0010\r\u001a\b\u0012\u0004\u0012\u00020\u000f0\u000e\u0012\u0006\u0010\u0010\u001a\u00020\u0007\u0012\u0006\u0010\u0011\u001a\u00020\u0007¢\u0006\u0004\b\u0012\u0010\u0013J\t\u0010#\u001a\u00020\u0003HÆ\u0003J\t\u0010$\u001a\u00020\u0005HÆ\u0003J\t\u0010%\u001a\u00020\u0007HÆ\u0003J\t\u0010&\u001a\u00020\u0003HÆ\u0003J\t\u0010'\u001a\u00020\u0005HÆ\u0003J\t\u0010(\u001a\u00020\u0005HÆ\u0003J\t\u0010)\u001a\u00020\u0005HÆ\u0003J\t\u0010*\u001a\u00020\u0005HÆ\u0003J\u000f\u0010+\u001a\b\u0012\u0004\u0012\u00020\u000f0\u000eHÆ\u0003J\t\u0010,\u001a\u00020\u0007HÆ\u0003J\t\u0010-\u001a\u00020\u0007HÆ\u0003J}\u0010.\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u00072\b\b\u0002\u0010\b\u001a\u00020\u00032\b\b\u0002\u0010\t\u001a\u00020\u00052\b\b\u0002\u0010\n\u001a\u00020\u00052\b\b\u0002\u0010\u000b\u001a\u00020\u00052\b\b\u0002\u0010\f\u001a\u00020\u00052\u000e\b\u0002\u0010\r\u001a\b\u0012\u0004\u0012\u00020\u000f0\u000e2\b\b\u0002\u0010\u0010\u001a\u00020\u00072\b\b\u0002\u0010\u0011\u001a\u00020\u0007HÆ\u0001J\u0013\u0010/\u001a\u0002002\b\u00101\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u00102\u001a\u00020\u0007HÖ\u0001J\t\u00103\u001a\u00020\u0003HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0014\u0010\u0015R\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0016\u0010\u0017R\u0011\u0010\u0006\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0018\u0010\u0019R\u0011\u0010\b\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u001a\u0010\u0015R\u0011\u0010\t\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u001b\u0010\u0017R\u0011\u0010\n\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u001c\u0010\u0017R\u0011\u0010\u000b\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u001d\u0010\u0017R\u0011\u0010\f\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u001e\u0010\u0017R\u0017\u0010\r\u001a\b\u0012\u0004\u0012\u00020\u000f0\u000e¢\u0006\b\n\u0000\u001a\u0004\b\u001f\u0010 R\u0011\u0010\u0010\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b!\u0010\u0019R\u0011\u0010\u0011\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\"\u0010\u0019¨\u00064"}, d2 = {"Lcom/discord/jank_stats/JankRecordStore$PendingRecord;", "", "sessionId", "", "sessionStartWallMs", "", "appVersionCode", "", "releaseChannel", "totalFrames", "jankFrames", "totalFrameTimeNanos", "jankTimeNanos", "buckets", "", "Lcom/discord/jank_stats/ScreenJankBucket;", "screensOverCap", "schemaVersion", "<init>", "(Ljava/lang/String;JILjava/lang/String;JJJJLjava/util/List;II)V", "getSessionId", "()Ljava/lang/String;", "getSessionStartWallMs", "()J", "getAppVersionCode", "()I", "getReleaseChannel", "getTotalFrames", "getJankFrames", "getTotalFrameTimeNanos", "getJankTimeNanos", "getBuckets", "()Ljava/util/List;", "getScreensOverCap", "getSchemaVersion", "component1", "component2", "component3", "component4", "component5", "component6", "component7", "component8", "component9", "component10", "component11", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "jank_stats_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final /* data */ class PendingRecord {
        private final int appVersionCode;

        @NotNull
        private final List<ScreenJankBucket> buckets;
        private final long jankFrames;
        private final long jankTimeNanos;

        @NotNull
        private final String releaseChannel;
        private final int schemaVersion;
        private final int screensOverCap;

        @NotNull
        private final String sessionId;
        private final long sessionStartWallMs;
        private final long totalFrameTimeNanos;
        private final long totalFrames;

        public PendingRecord(@NotNull String sessionId, long j, int i5, @NotNull String releaseChannel, long j5, long j7, long j10, long j11, @NotNull List<ScreenJankBucket> buckets, int i6, int i10) {
            Intrinsics.checkNotNullParameter(sessionId, "sessionId");
            Intrinsics.checkNotNullParameter(releaseChannel, "releaseChannel");
            Intrinsics.checkNotNullParameter(buckets, "buckets");
            this.sessionId = sessionId;
            this.sessionStartWallMs = j;
            this.appVersionCode = i5;
            this.releaseChannel = releaseChannel;
            this.totalFrames = j5;
            this.jankFrames = j7;
            this.totalFrameTimeNanos = j10;
            this.jankTimeNanos = j11;
            this.buckets = buckets;
            this.screensOverCap = i6;
            this.schemaVersion = i10;
        }

        @NotNull
        /* renamed from: component1, reason: from getter */
        public final String getSessionId() {
            return this.sessionId;
        }

        /* renamed from: component10, reason: from getter */
        public final int getScreensOverCap() {
            return this.screensOverCap;
        }

        /* renamed from: component11, reason: from getter */
        public final int getSchemaVersion() {
            return this.schemaVersion;
        }

        /* renamed from: component2, reason: from getter */
        public final long getSessionStartWallMs() {
            return this.sessionStartWallMs;
        }

        /* renamed from: component3, reason: from getter */
        public final int getAppVersionCode() {
            return this.appVersionCode;
        }

        @NotNull
        /* renamed from: component4, reason: from getter */
        public final String getReleaseChannel() {
            return this.releaseChannel;
        }

        /* renamed from: component5, reason: from getter */
        public final long getTotalFrames() {
            return this.totalFrames;
        }

        /* renamed from: component6, reason: from getter */
        public final long getJankFrames() {
            return this.jankFrames;
        }

        /* renamed from: component7, reason: from getter */
        public final long getTotalFrameTimeNanos() {
            return this.totalFrameTimeNanos;
        }

        /* renamed from: component8, reason: from getter */
        public final long getJankTimeNanos() {
            return this.jankTimeNanos;
        }

        @NotNull
        public final List<ScreenJankBucket> component9() {
            return this.buckets;
        }

        @NotNull
        public final PendingRecord copy(@NotNull String sessionId, long sessionStartWallMs, int appVersionCode, @NotNull String releaseChannel, long totalFrames, long jankFrames, long totalFrameTimeNanos, long jankTimeNanos, @NotNull List<ScreenJankBucket> buckets, int screensOverCap, int schemaVersion) {
            Intrinsics.checkNotNullParameter(sessionId, "sessionId");
            Intrinsics.checkNotNullParameter(releaseChannel, "releaseChannel");
            Intrinsics.checkNotNullParameter(buckets, "buckets");
            return new PendingRecord(sessionId, sessionStartWallMs, appVersionCode, releaseChannel, totalFrames, jankFrames, totalFrameTimeNanos, jankTimeNanos, buckets, screensOverCap, schemaVersion);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!(other instanceof PendingRecord)) {
                return false;
            }
            PendingRecord pendingRecord = (PendingRecord) other;
            return Intrinsics.areEqual(this.sessionId, pendingRecord.sessionId) && this.sessionStartWallMs == pendingRecord.sessionStartWallMs && this.appVersionCode == pendingRecord.appVersionCode && Intrinsics.areEqual(this.releaseChannel, pendingRecord.releaseChannel) && this.totalFrames == pendingRecord.totalFrames && this.jankFrames == pendingRecord.jankFrames && this.totalFrameTimeNanos == pendingRecord.totalFrameTimeNanos && this.jankTimeNanos == pendingRecord.jankTimeNanos && Intrinsics.areEqual(this.buckets, pendingRecord.buckets) && this.screensOverCap == pendingRecord.screensOverCap && this.schemaVersion == pendingRecord.schemaVersion;
        }

        public final int getAppVersionCode() {
            return this.appVersionCode;
        }

        @NotNull
        public final List<ScreenJankBucket> getBuckets() {
            return this.buckets;
        }

        public final long getJankFrames() {
            return this.jankFrames;
        }

        public final long getJankTimeNanos() {
            return this.jankTimeNanos;
        }

        @NotNull
        public final String getReleaseChannel() {
            return this.releaseChannel;
        }

        public final int getSchemaVersion() {
            return this.schemaVersion;
        }

        public final int getScreensOverCap() {
            return this.screensOverCap;
        }

        @NotNull
        public final String getSessionId() {
            return this.sessionId;
        }

        public final long getSessionStartWallMs() {
            return this.sessionStartWallMs;
        }

        public final long getTotalFrameTimeNanos() {
            return this.totalFrameTimeNanos;
        }

        public final long getTotalFrames() {
            return this.totalFrames;
        }

        public int hashCode() {
            return Integer.hashCode(this.schemaVersion) + com.discord.chat.bridge.botuikit.a.u(this.screensOverCap, e.e(this.buckets, com.discord.chat.bridge.botuikit.a.g(this.jankTimeNanos, com.discord.chat.bridge.botuikit.a.g(this.totalFrameTimeNanos, com.discord.chat.bridge.botuikit.a.g(this.jankFrames, com.discord.chat.bridge.botuikit.a.g(this.totalFrames, e.d(com.discord.chat.bridge.botuikit.a.u(this.appVersionCode, com.discord.chat.bridge.botuikit.a.g(this.sessionStartWallMs, this.sessionId.hashCode() * 31, 31), 31), 31, this.releaseChannel), 31), 31), 31), 31), 31), 31);
        }

        @NotNull
        public String toString() {
            return "PendingRecord(sessionId=" + this.sessionId + ", sessionStartWallMs=" + this.sessionStartWallMs + ", appVersionCode=" + this.appVersionCode + ", releaseChannel=" + this.releaseChannel + ", totalFrames=" + this.totalFrames + ", jankFrames=" + this.jankFrames + ", totalFrameTimeNanos=" + this.totalFrameTimeNanos + ", jankTimeNanos=" + this.jankTimeNanos + ", buckets=" + this.buckets + ", screensOverCap=" + this.screensOverCap + ", schemaVersion=" + this.schemaVersion + ")";
        }
    }

    @Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0010\b\n\u0002\b\u0010\n\u0002\u0010\u000b\n\u0002\b\u0004\b\u0086\b\u0018\u00002\u00020\u0001B'\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\u0003¢\u0006\u0004\b\t\u0010\nJ\t\u0010\u0012\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0013\u001a\u00020\u0005HÆ\u0003J\t\u0010\u0014\u001a\u00020\u0007HÆ\u0003J\t\u0010\u0015\u001a\u00020\u0003HÆ\u0003J1\u0010\u0016\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u00072\b\b\u0002\u0010\b\u001a\u00020\u0003HÆ\u0001J\u0013\u0010\u0017\u001a\u00020\u00182\b\u0010\u0019\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u001a\u001a\u00020\u0007HÖ\u0001J\t\u0010\u001b\u001a\u00020\u0003HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\fR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\u000eR\u0011\u0010\u0006\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\u0010R\u0011\u0010\b\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\f¨\u0006\u001c"}, d2 = {"Lcom/discord/jank_stats/JankRecordStore$SessionIdentity;", "", "sessionId", "", "sessionStartWallMs", "", "appVersionCode", "", "releaseChannel", "<init>", "(Ljava/lang/String;JILjava/lang/String;)V", "getSessionId", "()Ljava/lang/String;", "getSessionStartWallMs", "()J", "getAppVersionCode", "()I", "getReleaseChannel", "component1", "component2", "component3", "component4", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "jank_stats_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final /* data */ class SessionIdentity {
        private final int appVersionCode;

        @NotNull
        private final String releaseChannel;

        @NotNull
        private final String sessionId;
        private final long sessionStartWallMs;

        public SessionIdentity(@NotNull String sessionId, long j, int i5, @NotNull String releaseChannel) {
            Intrinsics.checkNotNullParameter(sessionId, "sessionId");
            Intrinsics.checkNotNullParameter(releaseChannel, "releaseChannel");
            this.sessionId = sessionId;
            this.sessionStartWallMs = j;
            this.appVersionCode = i5;
            this.releaseChannel = releaseChannel;
        }

        public static /* synthetic */ SessionIdentity copy$default(SessionIdentity sessionIdentity, String str, long j, int i5, String str2, int i6, Object obj) {
            if ((i6 & 1) != 0) {
                str = sessionIdentity.sessionId;
            }
            if ((i6 & 2) != 0) {
                j = sessionIdentity.sessionStartWallMs;
            }
            if ((i6 & 4) != 0) {
                i5 = sessionIdentity.appVersionCode;
            }
            if ((i6 & 8) != 0) {
                str2 = sessionIdentity.releaseChannel;
            }
            return sessionIdentity.copy(str, j, i5, str2);
        }

        @NotNull
        /* renamed from: component1, reason: from getter */
        public final String getSessionId() {
            return this.sessionId;
        }

        /* renamed from: component2, reason: from getter */
        public final long getSessionStartWallMs() {
            return this.sessionStartWallMs;
        }

        /* renamed from: component3, reason: from getter */
        public final int getAppVersionCode() {
            return this.appVersionCode;
        }

        @NotNull
        /* renamed from: component4, reason: from getter */
        public final String getReleaseChannel() {
            return this.releaseChannel;
        }

        @NotNull
        public final SessionIdentity copy(@NotNull String sessionId, long sessionStartWallMs, int appVersionCode, @NotNull String releaseChannel) {
            Intrinsics.checkNotNullParameter(sessionId, "sessionId");
            Intrinsics.checkNotNullParameter(releaseChannel, "releaseChannel");
            return new SessionIdentity(sessionId, sessionStartWallMs, appVersionCode, releaseChannel);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!(other instanceof SessionIdentity)) {
                return false;
            }
            SessionIdentity sessionIdentity = (SessionIdentity) other;
            return Intrinsics.areEqual(this.sessionId, sessionIdentity.sessionId) && this.sessionStartWallMs == sessionIdentity.sessionStartWallMs && this.appVersionCode == sessionIdentity.appVersionCode && Intrinsics.areEqual(this.releaseChannel, sessionIdentity.releaseChannel);
        }

        public final int getAppVersionCode() {
            return this.appVersionCode;
        }

        @NotNull
        public final String getReleaseChannel() {
            return this.releaseChannel;
        }

        @NotNull
        public final String getSessionId() {
            return this.sessionId;
        }

        public final long getSessionStartWallMs() {
            return this.sessionStartWallMs;
        }

        public int hashCode() {
            return this.releaseChannel.hashCode() + com.discord.chat.bridge.botuikit.a.u(this.appVersionCode, com.discord.chat.bridge.botuikit.a.g(this.sessionStartWallMs, this.sessionId.hashCode() * 31, 31), 31);
        }

        @NotNull
        public String toString() {
            return "SessionIdentity(sessionId=" + this.sessionId + ", sessionStartWallMs=" + this.sessionStartWallMs + ", appVersionCode=" + this.appVersionCode + ", releaseChannel=" + this.releaseChannel + ")";
        }
    }

    public /* synthetic */ JankRecordStore(JankKeyValueStore jankKeyValueStore, JankKeyValueStore jankKeyValueStore2, DefaultConstructorMarker defaultConstructorMarker) {
        this(jankKeyValueStore, jankKeyValueStore2);
    }

    private final void clearLive(Collection<String> keys) {
        if (keys.isEmpty()) {
            return;
        }
        HashMap hashMap = new HashMap(keys.size());
        Iterator<T> it = keys.iterator();
        while (it.hasNext()) {
            hashMap.put((String) it.next(), null);
        }
        this.liveStore.write(hashMap);
    }

    private final boolean flushLocked(JankSessionSnapshot snapshot) {
        SessionIdentity sessionIdentity = this.identity;
        if (sessionIdentity == null) {
            return false;
        }
        this.liveStore.write(u0.b(new Pair(e.k(KEY_RECORD_PREFIX, sessionIdentity.getSessionId()), RecordJson.INSTANCE.encodeRecord(toRecord(sessionIdentity, snapshot)))));
        return true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void load() {
        ReentrantLock reentrantLock = this.lock;
        reentrantLock.lock();
        try {
            Map<String, String> readAll = this.pendingStore.readAll();
            Map<String, String> readAll2 = this.liveStore.readAll();
            HashMap hashMap = new HashMap();
            ArrayList arrayList = new ArrayList(5);
            for (Map.Entry<String, String> entry : readAll.entrySet()) {
                String key = entry.getKey();
                String value = entry.getValue();
                if (x.o(key, KEY_RECORD_PREFIX, false)) {
                    PendingRecord recordUnder = recordUnder(key, value);
                    if (recordUnder == null) {
                        hashMap.put(key, null);
                    } else {
                        arrayList.add(recordUnder);
                    }
                }
            }
            for (Map.Entry<String, String> entry2 : readAll2.entrySet()) {
                String key2 = entry2.getKey();
                String value2 = entry2.getValue();
                PendingRecord recordUnder2 = recordUnder(key2, value2);
                if (recordUnder2 != null) {
                    if (!arrayList.isEmpty()) {
                        Iterator it = arrayList.iterator();
                        while (it.hasNext()) {
                            if (Intrinsics.areEqual(((PendingRecord) it.next()).getSessionId(), recordUnder2.getSessionId())) {
                                break;
                            }
                        }
                    }
                    arrayList.add(recordUnder2);
                    hashMap.put(key2, value2);
                }
            }
            for (PendingRecord pendingRecord : CollectionsKt.e0(arrayList, new Comparator() { // from class: com.discord.jank_stats.JankRecordStore$load$lambda$3$$inlined$sortedBy$1
                /* JADX WARN: Multi-variable type inference failed */
                @Override // java.util.Comparator
                public final int compare(T t5, T t10) {
                    return ho.a.a(Long.valueOf(((JankRecordStore.PendingRecord) t5).getSessionStartWallMs()), Long.valueOf(((JankRecordStore.PendingRecord) t10).getSessionStartWallMs()));
                }
            })) {
                this.inherited.put(pendingRecord.getSessionId(), pendingRecord);
            }
            trimInherited(hashMap);
            if (!hashMap.isEmpty()) {
                this.pendingStore.write(hashMap);
            }
            clearLive(readAll2.keySet());
            Unit unit = Unit.a;
            reentrantLock.unlock();
        } catch (Throwable th2) {
            reentrantLock.unlock();
            throw th2;
        }
    }

    private final PendingRecord recordUnder(String key, String value) {
        PendingRecord decodeRecord = RecordJson.INSTANCE.decodeRecord(value);
        if (decodeRecord != null) {
            if (Intrinsics.areEqual(KEY_RECORD_PREFIX + decodeRecord.getSessionId(), key)) {
                return decodeRecord;
            }
        }
        return null;
    }

    private final PendingRecord toRecord(SessionIdentity identity, JankSessionSnapshot snapshot) {
        Companion.Capped cap = INSTANCE.cap(snapshot.getBuckets());
        return new PendingRecord(identity.getSessionId(), identity.getSessionStartWallMs(), identity.getAppVersionCode(), identity.getReleaseChannel(), snapshot.getTotalFrames(), snapshot.getJankFrames(), snapshot.getTotalFrameTimeNanos(), snapshot.getJankTimeNanos(), cap.getBuckets(), cap.getScreensOverCap(), 2);
    }

    private final void trimInherited(Map<String, String> changes) {
        int size = this.inherited.size() - 4;
        if (size <= 0) {
            return;
        }
        Set<String> keySet = this.inherited.keySet();
        Intrinsics.checkNotNullExpressionValue(keySet, "<get-keys>(...)");
        for (String str : CollectionsKt.f0(keySet, size)) {
            this.inherited.remove(str);
            changes.put(KEY_RECORD_PREFIX + str, null);
        }
    }

    public final void ack(@NotNull Set<String> sessionIds) {
        Intrinsics.checkNotNullParameter(sessionIds, "sessionIds");
        ReentrantLock reentrantLock = this.lock;
        reentrantLock.lock();
        try {
            Set<String> keySet = this.inherited.keySet();
            Intrinsics.checkNotNullExpressionValue(keySet, "<get-keys>(...)");
            ArrayList arrayList = new ArrayList();
            for (Object obj : keySet) {
                if (sessionIds.contains((String) obj)) {
                    arrayList.add(obj);
                }
            }
            if (arrayList.isEmpty()) {
                reentrantLock.unlock();
                return;
            }
            JankKeyValueStore jankKeyValueStore = this.pendingStore;
            int a = u0.a(d0.l(arrayList, 10));
            if (a < 16) {
                a = 16;
            }
            LinkedHashMap linkedHashMap = new LinkedHashMap(a);
            Iterator it = arrayList.iterator();
            while (it.hasNext()) {
                linkedHashMap.put(KEY_RECORD_PREFIX + ((String) it.next()), null);
            }
            jankKeyValueStore.write(linkedHashMap);
            Iterator it2 = arrayList.iterator();
            while (it2.hasNext()) {
                this.inherited.remove((String) it2.next());
            }
            Unit unit = Unit.a;
            reentrantLock.unlock();
        } catch (Throwable th2) {
            reentrantLock.unlock();
            throw th2;
        }
    }

    public final String currentSessionId() {
        ReentrantLock reentrantLock = this.lock;
        reentrantLock.lock();
        try {
            SessionIdentity sessionIdentity = this.identity;
            return sessionIdentity != null ? sessionIdentity.getSessionId() : null;
        } finally {
            reentrantLock.unlock();
        }
    }

    public final boolean flush(@NotNull JankSessionSnapshot snapshot) {
        Intrinsics.checkNotNullParameter(snapshot, "snapshot");
        ReentrantLock reentrantLock = this.lock;
        reentrantLock.lock();
        try {
            return flushLocked(snapshot);
        } finally {
            reentrantLock.unlock();
        }
    }

    public final boolean hydrate(@NotNull SessionIdentity identity, JankSessionSnapshot outgoing) {
        Intrinsics.checkNotNullParameter(identity, "identity");
        ReentrantLock reentrantLock = this.lock;
        reentrantLock.lock();
        try {
            SessionIdentity sessionIdentity = this.identity;
            if (Intrinsics.areEqual(sessionIdentity != null ? sessionIdentity.getSessionId() : null, identity.getSessionId())) {
                reentrantLock.unlock();
                return false;
            }
            if (sessionIdentity != null && outgoing != null) {
                PendingRecord record = toRecord(sessionIdentity, outgoing);
                this.inherited.put(sessionIdentity.getSessionId(), record);
                HashMap hashMap = new HashMap();
                trimInherited(hashMap);
                hashMap.put(KEY_RECORD_PREFIX + sessionIdentity.getSessionId(), RecordJson.INSTANCE.encodeRecord(record));
                this.pendingStore.write(hashMap);
                this.liveStore.write(u0.b(new Pair(KEY_RECORD_PREFIX + sessionIdentity.getSessionId(), null)));
            }
            this.identity = identity;
            reentrantLock.unlock();
            return true;
        } catch (Throwable th2) {
            reentrantLock.unlock();
            throw th2;
        }
    }

    @NotNull
    public final List<PendingRecord> pending() {
        ReentrantLock reentrantLock = this.lock;
        reentrantLock.lock();
        try {
            Collection<PendingRecord> values = this.inherited.values();
            Intrinsics.checkNotNullExpressionValue(values, "<get-values>(...)");
            return CollectionsKt.i0(values);
        } finally {
            reentrantLock.unlock();
        }
    }

    public final boolean tryFlush(@NotNull JankSessionSnapshot snapshot) {
        Intrinsics.checkNotNullParameter(snapshot, "snapshot");
        if (!this.lock.tryLock()) {
            return false;
        }
        try {
            return flushLocked(snapshot);
        } finally {
            this.lock.unlock();
        }
    }

    private JankRecordStore(JankKeyValueStore jankKeyValueStore, JankKeyValueStore jankKeyValueStore2) {
        this.liveStore = jankKeyValueStore;
        this.pendingStore = jankKeyValueStore2;
        this.lock = new ReentrantLock();
        this.inherited = new LinkedHashMap<>();
    }
}
