package com.discord.jank_stats;

import com.discord.age_assurance.c;
import com.discord.codegen.NativeJankSessionModuleSpec;
import com.discord.jank_stats.JankRecordStore;
import com.discord.react.utilities.NativeArrayExtensionsKt;
import com.discord.react.utilities.NativeMapExtensionsKt;
import com.facebook.react.bridge.BaseJavaModule;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.WritableNativeArray;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.collections.r0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.ranges.IntRange;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000.\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u0010\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\tH\u0016J\u0010\u0010\n\u001a\u00020\u00072\u0006\u0010\u000b\u001a\u00020\fH\u0016J\u0010\u0010\r\u001a\u00020\u00072\u0006\u0010\u000e\u001a\u00020\u000fH\u0016¨\u0006\u0010"}, d2 = {"Lcom/discord/jank_stats/JankSessionModule;", "Lcom/discord/codegen/NativeJankSessionModuleSpec;", "reactContext", "Lcom/facebook/react/bridge/ReactApplicationContext;", "<init>", "(Lcom/facebook/react/bridge/ReactApplicationContext;)V", "hydrateLaunchId", "", "launchId", "", "getPendingReports", BaseJavaModule.METHOD_TYPE_PROMISE, "Lcom/facebook/react/bridge/Promise;", "ackReports", "sessionIds", "Lcom/facebook/react/bridge/ReadableArray;", "jank_stats_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nJankSessionModule.kt\nKotlin\n*S Kotlin\n*F\n+ 1 JankSessionModule.kt\ncom/discord/jank_stats/JankSessionModule\n+ 2 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n+ 3 fake.kt\nkotlin/jvm/internal/FakeKt\n+ 4 WritableBuilders.kt\ncom/discord/react/utilities/WritableBuildersKt\n*L\n1#1,112:1\n1625#2:113\n1869#2:114\n1870#2:116\n1626#2:117\n1#3:115\n14#4:118\n8#4,9:119\n14#4:128\n8#4,11:129\n18#4:140\n*S KotlinDebug\n*F\n+ 1 JankSessionModule.kt\ncom/discord/jank_stats/JankSessionModule\n*L\n50#1:113\n50#1:114\n50#1:116\n50#1:117\n50#1:115\n23#1:118\n23#1:119,9\n38#1:128\n38#1:129,11\n23#1:140\n*E\n"})
/* loaded from: classes.dex */
public final class JankSessionModule extends NativeJankSessionModuleSpec {
    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public JankSessionModule(@NotNull ReactApplicationContext reactContext) {
        super(reactContext);
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit getPendingReports$lambda$2(Promise promise, List records) {
        List rollUpByScreen;
        Intrinsics.checkNotNullParameter(records, "records");
        WritableNativeArray writableNativeArray = new WritableNativeArray();
        Iterator it = records.iterator();
        while (it.hasNext()) {
            JankRecordStore.PendingRecord pendingRecord = (JankRecordStore.PendingRecord) it.next();
            rollUpByScreen = JankSessionModuleKt.rollUpByScreen(pendingRecord.getBuckets());
            Pair pair = new Pair("schemaVersion", Integer.valueOf(pendingRecord.getSchemaVersion()));
            Pair pair2 = new Pair("sessionId", pendingRecord.getSessionId());
            Pair pair3 = new Pair("sessionStartMs", Double.valueOf(pendingRecord.getSessionStartWallMs()));
            Pair pair4 = new Pair("appVersionCode", Integer.valueOf(pendingRecord.getAppVersionCode()));
            Pair pair5 = new Pair("releaseChannel", pendingRecord.getReleaseChannel());
            Pair pair6 = new Pair("totalFrameCount", Double.valueOf(pendingRecord.getTotalFrames()));
            Pair pair7 = new Pair("jankFrameCount", Double.valueOf(pendingRecord.getJankFrames()));
            Pair pair8 = new Pair("totalFrameTimeMs", Double.valueOf(pendingRecord.getTotalFrameTimeNanos() / 1000000.0d));
            Pair pair9 = new Pair("jankFrameTimeMs", Double.valueOf(pendingRecord.getJankTimeNanos() / 1000000.0d));
            Pair pair10 = new Pair("screensOverCap", Integer.valueOf(pendingRecord.getScreensOverCap()));
            WritableNativeArray writableNativeArray2 = new WritableNativeArray();
            Iterator it2 = rollUpByScreen.iterator();
            while (it2.hasNext()) {
                writableNativeArray2.pushMap(((ScreenRollup) it2.next()).toNativeMap());
            }
            writableNativeArray.pushMap(NativeMapExtensionsKt.nativeMapOf(pair, pair2, pair3, pair4, pair5, pair6, pair7, pair8, pair9, pair10, new Pair("screens", writableNativeArray2)));
        }
        promise.resolve(writableNativeArray);
        return Unit.a;
    }

    @Override // com.discord.codegen.NativeJankSessionModuleSpec
    public void ackReports(@NotNull ReadableArray sessionIds) {
        Intrinsics.checkNotNullParameter(sessionIds, "sessionIds");
        JankSessionRecorder jankSessionRecorder = JankSessionRecorder.INSTANCE;
        IntRange sizeRange = NativeArrayExtensionsKt.sizeRange(sessionIds);
        HashSet hashSet = new HashSet();
        Iterator it = sizeRange.iterator();
        while (it.hasNext()) {
            String string = sessionIds.getString(((r0) it).nextInt());
            if (string != null) {
                hashSet.add(string);
            }
        }
        jankSessionRecorder.acknowledge(hashSet);
    }

    @Override // com.discord.codegen.NativeJankSessionModuleSpec
    public void getPendingReports(@NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(promise, "promise");
        JankSessionRecorder.INSTANCE.pendingRecords(new c(promise, 9));
    }

    @Override // com.discord.codegen.NativeJankSessionModuleSpec
    public void hydrateLaunchId(@NotNull String launchId) {
        Intrinsics.checkNotNullParameter(launchId, "launchId");
        JankSessionRecorder.INSTANCE.hydrateLaunchId(launchId);
    }
}
