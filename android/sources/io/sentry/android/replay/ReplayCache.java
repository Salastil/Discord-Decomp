package io.sentry.android.replay;

import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.views.textinput.ReactEditTextInputConnectionWrapper;
import fo.l;
import io.sentry.SentryLevel;
import io.sentry.android.replay.ReplayCache;
import io.sentry.android.replay.video.MuxerConfig;
import io.sentry.android.replay.video.SimpleVideoEncoder;
import io.sentry.l3;
import io.sentry.protocol.v;
import io.sentry.r;
import io.sentry.t;
import io.sentry.v5;
import io.sentry.w5;
import java.io.BufferedReader;
import java.io.Closeable;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.InputStreamReader;
import java.io.StringReader;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.Date;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.atomic.AtomicBoolean;
import ki.b;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.g0;
import kotlin.collections.h0;
import kotlin.collections.m0;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.jvm.internal.TypeIntrinsics;
import kotlin.text.Charsets;
import kotlin.text.StringsKt;
import kotlin.text.StringsKt__StringsKt;
import kotlin.text.x;
import m3.n;
import org.jetbrains.annotations.NotNull;
import yo.e;
import yo.h;
import yo.j;

@Metadata(d1 = {"\u0000\u0082\u0001\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u000b\n\u0002\u0010\b\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u000f\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0010!\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0007\b\u0007\u0018\u0000 U2\u00020\u0001:\u0001UB\u0017\u0012\u0006\u0010\u0003\u001a\u00020\u0002\u0012\u0006\u0010\u0005\u001a\u00020\u0004¢\u0006\u0004\b\u0006\u0010\u0007J\u0019\u0010\u000b\u001a\u00020\n2\b\u0010\t\u001a\u0004\u0018\u00010\bH\u0002¢\u0006\u0004\b\u000b\u0010\fJ\u0017\u0010\u0010\u001a\u00020\u000f2\u0006\u0010\u000e\u001a\u00020\rH\u0002¢\u0006\u0004\b\u0010\u0010\u0011J+\u0010\u001a\u001a\u00020\u000f2\u0006\u0010\u0013\u001a\u00020\u00122\u0006\u0010\u0015\u001a\u00020\u00142\n\b\u0002\u0010\u0017\u001a\u0004\u0018\u00010\u0016H\u0000¢\u0006\u0004\b\u0018\u0010\u0019J)\u0010\u001a\u001a\u00020\u000f2\u0006\u0010\u001b\u001a\u00020\r2\u0006\u0010\u0015\u001a\u00020\u00142\n\b\u0002\u0010\u0017\u001a\u0004\u0018\u00010\u0016¢\u0006\u0004\b\u001a\u0010\u001cJ\u0011\u0010\u001f\u001a\u0004\u0018\u00010\u0014H\u0000¢\u0006\u0004\b\u001d\u0010\u001eJQ\u0010*\u001a\u0004\u0018\u00010)2\u0006\u0010 \u001a\u00020\u00142\u0006\u0010!\u001a\u00020\u00142\u0006\u0010#\u001a\u00020\"2\u0006\u0010$\u001a\u00020\"2\u0006\u0010%\u001a\u00020\"2\u0006\u0010&\u001a\u00020\"2\u0006\u0010'\u001a\u00020\"2\b\b\u0002\u0010(\u001a\u00020\r¢\u0006\u0004\b*\u0010+J\u0019\u0010/\u001a\u0004\u0018\u00010\u00162\u0006\u0010,\u001a\u00020\u0014H\u0000¢\u0006\u0004\b-\u0010.J\u000f\u00100\u001a\u00020\u000fH\u0016¢\u0006\u0004\b0\u00101J!\u00106\u001a\u00020\u000f2\u0006\u00102\u001a\u00020\u00162\b\u00103\u001a\u0004\u0018\u00010\u0016H\u0000¢\u0006\u0004\b4\u00105R\u0014\u0010\u0003\u001a\u00020\u00028\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u0003\u00107R\u0014\u0010\u0005\u001a\u00020\u00048\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u0005\u00108R\u0014\u0010:\u001a\u0002098\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b:\u0010;R\u0014\u0010=\u001a\u00020<8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b=\u0010>R\u0014\u0010?\u001a\u00020<8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b?\u0010>R\u0014\u0010@\u001a\u00020<8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b@\u0010>R\u0018\u0010B\u001a\u0004\u0018\u00010A8\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\bB\u0010CR\u001d\u0010H\u001a\u0004\u0018\u00010\r8@X\u0080\u0084\u0002¢\u0006\f\n\u0004\bD\u0010E\u001a\u0004\bF\u0010GR \u0010J\u001a\b\u0012\u0004\u0012\u00020\b0I8\u0000X\u0080\u0004¢\u0006\f\n\u0004\bJ\u0010K\u001a\u0004\bL\u0010MR0\u0010P\u001a\u001e\u0012\u0004\u0012\u00020\u0016\u0012\u0004\u0012\u00020\u00160Nj\u000e\u0012\u0004\u0012\u00020\u0016\u0012\u0004\u0012\u00020\u0016`O8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\bP\u0010QR\u001d\u0010T\u001a\u0004\u0018\u00010\r8@X\u0080\u0084\u0002¢\u0006\f\n\u0004\bR\u0010E\u001a\u0004\bS\u0010G¨\u0006V"}, d2 = {"Lio/sentry/android/replay/ReplayCache;", "Ljava/io/Closeable;", "Lio/sentry/v5;", "options", "Lio/sentry/protocol/v;", "replayId", "<init>", "(Lio/sentry/v5;Lio/sentry/protocol/v;)V", "Lio/sentry/android/replay/ReplayFrame;", "frame", "", "encode", "(Lio/sentry/android/replay/ReplayFrame;)Z", "Ljava/io/File;", "file", "", "deleteFile", "(Ljava/io/File;)V", "Landroid/graphics/Bitmap;", "bitmap", "", "frameTimestamp", "", "screen", "addFrame$sentry_android_replay_release", "(Landroid/graphics/Bitmap;JLjava/lang/String;)V", "addFrame", "screenshot", "(Ljava/io/File;JLjava/lang/String;)V", "firstFrameTimestamp$sentry_android_replay_release", "()Ljava/lang/Long;", "firstFrameTimestamp", "duration", "from", "", "segmentId", "height", "width", "frameRate", "bitRate", "videoFile", "Lio/sentry/android/replay/GeneratedVideo;", "createVideoOf", "(JJIIIIILjava/io/File;)Lio/sentry/android/replay/GeneratedVideo;", "until", "rotate$sentry_android_replay_release", "(J)Ljava/lang/String;", "rotate", "close", "()V", "key", "value", "persistSegmentValues$sentry_android_replay_release", "(Ljava/lang/String;Ljava/lang/String;)V", "persistSegmentValues", "Lio/sentry/v5;", "Lio/sentry/protocol/v;", "Ljava/util/concurrent/atomic/AtomicBoolean;", "isClosed", "Ljava/util/concurrent/atomic/AtomicBoolean;", "Lio/sentry/util/a;", "encoderLock", "Lio/sentry/util/a;", "lock", "framesLock", "Lio/sentry/android/replay/video/SimpleVideoEncoder;", "encoder", "Lio/sentry/android/replay/video/SimpleVideoEncoder;", "replayCacheDir$delegate", "Lkotlin/Lazy;", "getReplayCacheDir$sentry_android_replay_release", "()Ljava/io/File;", "replayCacheDir", "", "frames", "Ljava/util/List;", "getFrames$sentry_android_replay_release", "()Ljava/util/List;", "Ljava/util/LinkedHashMap;", "Lkotlin/collections/LinkedHashMap;", "ongoingSegment", "Ljava/util/LinkedHashMap;", "ongoingSegmentFile$delegate", "getOngoingSegmentFile$sentry_android_replay_release", "ongoingSegmentFile", "Companion", "sentry-android-replay_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nReplayCache.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ReplayCache.kt\nio/sentry/android/replay/ReplayCache\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n+ 3 FileReadWrite.kt\nkotlin/io/FilesKt__FileReadWriteKt\n+ 4 _Sequences.kt\nkotlin/sequences/SequencesKt___SequencesKt\n*L\n1#1,470:1\n1#2:471\n1#2:474\n230#3,2:472\n739#4,4:475\n*S KotlinDebug\n*F\n+ 1 ReplayCache.kt\nio/sentry/android/replay/ReplayCache\n*L\n287#1:474\n287#1:472,2\n288#1:475,4\n*E\n"})
/* loaded from: classes3.dex */
public final class ReplayCache implements Closeable {

    @NotNull
    public static final String ONGOING_SEGMENT = ".ongoing_segment";

    @NotNull
    public static final String SEGMENT_KEY_BIT_RATE = "config.bit-rate";

    @NotNull
    public static final String SEGMENT_KEY_FRAME_RATE = "config.frame-rate";

    @NotNull
    public static final String SEGMENT_KEY_HEIGHT = "config.height";

    @NotNull
    public static final String SEGMENT_KEY_ID = "segment.id";

    @NotNull
    public static final String SEGMENT_KEY_REPLAY_ID = "replay.id";

    @NotNull
    public static final String SEGMENT_KEY_REPLAY_RECORDING = "replay.recording";

    @NotNull
    public static final String SEGMENT_KEY_REPLAY_SCREEN_AT_START = "replay.screen-at-start";

    @NotNull
    public static final String SEGMENT_KEY_REPLAY_TYPE = "replay.type";

    @NotNull
    public static final String SEGMENT_KEY_TIMESTAMP = "segment.timestamp";

    @NotNull
    public static final String SEGMENT_KEY_WIDTH = "config.width";
    private SimpleVideoEncoder encoder;

    @NotNull
    private final io.sentry.util.a encoderLock;

    @NotNull
    private final List<ReplayFrame> frames;

    @NotNull
    private final io.sentry.util.a framesLock;

    @NotNull
    private final AtomicBoolean isClosed;

    @NotNull
    private final io.sentry.util.a lock;

    @NotNull
    private final LinkedHashMap<String, String> ongoingSegment;

    /* renamed from: ongoingSegmentFile$delegate, reason: from kotlin metadata */
    @NotNull
    private final Lazy ongoingSegmentFile;

    @NotNull
    private final v5 options;

    /* renamed from: replayCacheDir$delegate, reason: from kotlin metadata */
    @NotNull
    private final Lazy replayCacheDir;

    @NotNull
    private final v replayId;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    public static final int $stable = 8;

    @Metadata(d1 = {"\u0000:\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\r\b\u0080\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u001f\u0010\t\u001a\u0004\u0018\u00010\b2\u0006\u0010\u0005\u001a\u00020\u00042\u0006\u0010\u0007\u001a\u00020\u0006¢\u0006\u0004\b\t\u0010\nJ9\u0010\u0011\u001a\u0004\u0018\u00010\u000e2\u0006\u0010\u0005\u001a\u00020\u00042\u0006\u0010\u0007\u001a\u00020\u00062\u0016\b\u0002\u0010\r\u001a\u0010\u0012\u0004\u0012\u00020\u0006\u0012\u0004\u0012\u00020\f\u0018\u00010\u000bH\u0000¢\u0006\u0004\b\u000f\u0010\u0010R\u0014\u0010\u0013\u001a\u00020\u00128\u0000X\u0080T¢\u0006\u0006\n\u0004\b\u0013\u0010\u0014R\u0014\u0010\u0015\u001a\u00020\u00128\u0000X\u0080T¢\u0006\u0006\n\u0004\b\u0015\u0010\u0014R\u0014\u0010\u0016\u001a\u00020\u00128\u0000X\u0080T¢\u0006\u0006\n\u0004\b\u0016\u0010\u0014R\u0014\u0010\u0017\u001a\u00020\u00128\u0000X\u0080T¢\u0006\u0006\n\u0004\b\u0017\u0010\u0014R\u0014\u0010\u0018\u001a\u00020\u00128\u0000X\u0080T¢\u0006\u0006\n\u0004\b\u0018\u0010\u0014R\u0014\u0010\u0019\u001a\u00020\u00128\u0000X\u0080T¢\u0006\u0006\n\u0004\b\u0019\u0010\u0014R\u0014\u0010\u001a\u001a\u00020\u00128\u0000X\u0080T¢\u0006\u0006\n\u0004\b\u001a\u0010\u0014R\u0014\u0010\u001b\u001a\u00020\u00128\u0000X\u0080T¢\u0006\u0006\n\u0004\b\u001b\u0010\u0014R\u0014\u0010\u001c\u001a\u00020\u00128\u0000X\u0080T¢\u0006\u0006\n\u0004\b\u001c\u0010\u0014R\u0014\u0010\u001d\u001a\u00020\u00128\u0000X\u0080T¢\u0006\u0006\n\u0004\b\u001d\u0010\u0014R\u0014\u0010\u001e\u001a\u00020\u00128\u0000X\u0080T¢\u0006\u0006\n\u0004\b\u001e\u0010\u0014¨\u0006\u001f"}, d2 = {"Lio/sentry/android/replay/ReplayCache$Companion;", "", "<init>", "()V", "Lio/sentry/v5;", "options", "Lio/sentry/protocol/v;", "replayId", "Ljava/io/File;", "makeReplayCacheDir", "(Lio/sentry/v5;Lio/sentry/protocol/v;)Ljava/io/File;", "Lkotlin/Function1;", "Lio/sentry/android/replay/ReplayCache;", "replayCacheProvider", "Lio/sentry/android/replay/LastSegmentData;", "fromDisk$sentry_android_replay_release", "(Lio/sentry/v5;Lio/sentry/protocol/v;Lkotlin/jvm/functions/Function1;)Lio/sentry/android/replay/LastSegmentData;", "fromDisk", "", "ONGOING_SEGMENT", "Ljava/lang/String;", "SEGMENT_KEY_BIT_RATE", "SEGMENT_KEY_FRAME_RATE", "SEGMENT_KEY_HEIGHT", "SEGMENT_KEY_ID", "SEGMENT_KEY_REPLAY_ID", "SEGMENT_KEY_REPLAY_RECORDING", "SEGMENT_KEY_REPLAY_SCREEN_AT_START", "SEGMENT_KEY_REPLAY_TYPE", "SEGMENT_KEY_TIMESTAMP", "SEGMENT_KEY_WIDTH", "sentry-android-replay_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
    @SourceDebugExtension({"SMAP\nReplayCache.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ReplayCache.kt\nio/sentry/android/replay/ReplayCache$Companion\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n+ 3 FileReadWrite.kt\nkotlin/io/FilesKt__FileReadWriteKt\n+ 4 _Sequences.kt\nkotlin/sequences/SequencesKt___SequencesKt\n+ 5 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n*L\n1#1,470:1\n1#2:471\n1#2:474\n230#3,2:472\n739#4,4:475\n1002#5,2:479\n1045#5:481\n*S KotlinDebug\n*F\n+ 1 ReplayCache.kt\nio/sentry/android/replay/ReplayCache$Companion\n*L\n342#1:474\n342#1:472,2\n343#1:475,4\n413#1:479,2\n446#1:481\n*E\n"})
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final boolean fromDisk$lambda$3(ReplayCache replayCache, File file, String str) {
            Intrinsics.checkNotNull(str);
            if (x.h(str, ".jpg", false)) {
                File file2 = new File(file, str);
                Intrinsics.checkNotNullParameter(file2, "<this>");
                String name = file2.getName();
                Intrinsics.checkNotNullExpressionValue(name, "getName(...)");
                Long a0 = StringsKt.a0(StringsKt.Z(name, name));
                if (a0 != null) {
                    ReplayCache.addFrame$default(replayCache, file2, a0.longValue(), null, 4, null);
                }
            }
            return false;
        }

        /* JADX WARN: Multi-variable type inference failed */
        public static /* synthetic */ LastSegmentData fromDisk$sentry_android_replay_release$default(Companion companion, v5 v5Var, v vVar, Function1 function1, int i5, Object obj) {
            if ((i5 & 4) != 0) {
                function1 = null;
            }
            return companion.fromDisk$sentry_android_replay_release(v5Var, vVar, function1);
        }

        /* JADX WARN: Code restructure failed: missing block: B:75:0x01ec, code lost:
        
            if (r7 != null) goto L91;
         */
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        public final LastSegmentData fromDisk$sentry_android_replay_release(@NotNull v5 options, @NotNull v replayId, Function1<? super v, ReplayCache> replayCacheProvider) {
            Date date;
            w5 w5Var;
            LastSegmentData lastSegmentData;
            ReplayCache replayCache;
            Iterable iterable;
            List split$default;
            String str = "";
            Intrinsics.checkNotNullParameter(options, "options");
            Intrinsics.checkNotNullParameter(replayId, "replayId");
            File makeReplayCacheDir = makeReplayCacheDir(options, replayId);
            File file = new File(makeReplayCacheDir, ReplayCache.ONGOING_SEGMENT);
            if (!file.exists()) {
                options.getLogger().u(SentryLevel.DEBUG, "No ongoing segment found for replay: %s", replayId);
                n.G(makeReplayCacheDir);
                return null;
            }
            LinkedHashMap linkedHashMap = new LinkedHashMap();
            BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(new FileInputStream(file), Charsets.UTF_8), 8192);
            try {
                Iterator it = d9.a.B(bufferedReader).iterator();
                while (true) {
                    if (!it.hasNext()) {
                        break;
                    }
                    split$default = StringsKt__StringsKt.split$default((String) it.next(), new String[]{"="}, false, 2, 2, null);
                    linkedHashMap.put((String) split$default.get(0), (String) split$default.get(1));
                }
                bufferedReader.close();
                String str2 = (String) linkedHashMap.get(ReplayCache.SEGMENT_KEY_HEIGHT);
                Integer intOrNull = str2 != null ? StringsKt.toIntOrNull(str2) : null;
                String str3 = (String) linkedHashMap.get(ReplayCache.SEGMENT_KEY_WIDTH);
                Integer intOrNull2 = str3 != null ? StringsKt.toIntOrNull(str3) : null;
                String str4 = (String) linkedHashMap.get(ReplayCache.SEGMENT_KEY_FRAME_RATE);
                Integer intOrNull3 = str4 != null ? StringsKt.toIntOrNull(str4) : null;
                String str5 = (String) linkedHashMap.get(ReplayCache.SEGMENT_KEY_BIT_RATE);
                Integer intOrNull4 = str5 != null ? StringsKt.toIntOrNull(str5) : null;
                String str6 = (String) linkedHashMap.get(ReplayCache.SEGMENT_KEY_ID);
                Integer intOrNull5 = str6 != null ? StringsKt.toIntOrNull(str6) : null;
                try {
                    String str7 = (String) linkedHashMap.get(ReplayCache.SEGMENT_KEY_TIMESTAMP);
                    if (str7 == null) {
                        str7 = "";
                    }
                    date = b.t(str7);
                } catch (Throwable unused) {
                    date = null;
                }
                try {
                    String str8 = (String) linkedHashMap.get(ReplayCache.SEGMENT_KEY_REPLAY_TYPE);
                    if (str8 != null) {
                        str = str8;
                    }
                    w5Var = w5.valueOf(str);
                } catch (Throwable unused2) {
                    w5Var = null;
                }
                if (intOrNull == null || intOrNull2 == null || intOrNull3 == null || intOrNull4 == null || intOrNull5 == null) {
                    lastSegmentData = null;
                } else {
                    lastSegmentData = null;
                    if (intOrNull5.intValue() != -1 && date != null && w5Var != null) {
                        ScreenshotRecorderConfig screenshotRecorderConfig = new ScreenshotRecorderConfig(intOrNull2.intValue(), intOrNull.intValue(), 1.0f, 1.0f, intOrNull3.intValue(), intOrNull4.intValue());
                        if (replayCacheProvider == null || (replayCache = (ReplayCache) replayCacheProvider.invoke(replayId)) == null) {
                            replayCache = new ReplayCache(options, replayId);
                        }
                        File replayCacheDir$sentry_android_replay_release = replayCache.getReplayCacheDir$sentry_android_replay_release();
                        if (replayCacheDir$sentry_android_replay_release != null) {
                            replayCacheDir$sentry_android_replay_release.listFiles(new t(1, replayCache));
                        }
                        if (replayCache.getFrames$sentry_android_replay_release().isEmpty()) {
                            options.getLogger().u(SentryLevel.DEBUG, "No frames found for replay: %s, deleting the replay", replayId);
                            n.G(makeReplayCacheDir);
                            return null;
                        }
                        List<ReplayFrame> frames$sentry_android_replay_release = replayCache.getFrames$sentry_android_replay_release();
                        if (frames$sentry_android_replay_release.size() > 1) {
                            g0.n(frames$sentry_android_replay_release, new Comparator() { // from class: io.sentry.android.replay.ReplayCache$Companion$fromDisk$$inlined$sortBy$1
                                /* JADX WARN: Multi-variable type inference failed */
                                @Override // java.util.Comparator
                                public final int compare(T t5, T t10) {
                                    return ho.a.a(Long.valueOf(((ReplayFrame) t5).getTimestamp()), Long.valueOf(((ReplayFrame) t10).getTimestamp()));
                                }
                            });
                        }
                        w5 w5Var2 = w5.SESSION;
                        int intValue = w5Var == w5Var2 ? intOrNull5.intValue() : 0;
                        if (w5Var != w5Var2) {
                            date = b.s(((ReplayFrame) CollectionsKt.K(replayCache.getFrames$sentry_android_replay_release())).getTimestamp());
                            Intrinsics.checkNotNull(date);
                        }
                        Date date2 = date;
                        long timestamp = (((ReplayFrame) CollectionsKt.Q(replayCache.getFrames$sentry_android_replay_release())).getTimestamp() - date2.getTime()) + (1000 / intOrNull3.intValue());
                        String str9 = (String) linkedHashMap.get(ReplayCache.SEGMENT_KEY_REPLAY_RECORDING);
                        if (str9 != null) {
                            l3 l3Var = (l3) options.getSerializer().c(new StringReader(str9), l3.class);
                            if ((l3Var != null ? l3Var.f11648e : null) != null) {
                                List list = l3Var.f11648e;
                                Intrinsics.checkNotNull(list);
                                iterable = new LinkedList(list);
                            } else {
                                iterable = null;
                            }
                        }
                        iterable = m0.f13512d;
                        return new LastSegmentData(screenshotRecorderConfig, replayCache, date2, intValue, timestamp, w5Var, (String) linkedHashMap.get(ReplayCache.SEGMENT_KEY_REPLAY_SCREEN_AT_START), CollectionsKt.e0(iterable, new Comparator() { // from class: io.sentry.android.replay.ReplayCache$Companion$fromDisk$$inlined$sortedBy$1
                            /* JADX WARN: Multi-variable type inference failed */
                            @Override // java.util.Comparator
                            public final int compare(T t5, T t10) {
                                return ho.a.a(Long.valueOf(((io.sentry.rrweb.b) t5).f11943e), Long.valueOf(((io.sentry.rrweb.b) t10).f11943e));
                            }
                        }));
                    }
                }
                options.getLogger().u(SentryLevel.DEBUG, "Incorrect segment values found for replay: %s, deleting the replay", replayId);
                n.G(makeReplayCacheDir);
                return lastSegmentData;
            } finally {
            }
        }

        public final File makeReplayCacheDir(@NotNull v5 options, @NotNull v replayId) {
            Intrinsics.checkNotNullParameter(options, "options");
            Intrinsics.checkNotNullParameter(replayId, "replayId");
            String cacheDirPath = options.getCacheDirPath();
            if (cacheDirPath == null || cacheDirPath.length() == 0) {
                options.getLogger().u(SentryLevel.WARNING, "SentryOptions.cacheDirPath is not set, session replay is no-op", new Object[0]);
                return null;
            }
            String cacheDirPath2 = options.getCacheDirPath();
            Intrinsics.checkNotNull(cacheDirPath2);
            File file = new File(cacheDirPath2, "replay_" + replayId);
            file.mkdirs();
            return file;
        }

        private Companion() {
        }
    }

    public ReplayCache(@NotNull v5 options, @NotNull v replayId) {
        Intrinsics.checkNotNullParameter(options, "options");
        Intrinsics.checkNotNullParameter(replayId, "replayId");
        this.options = options;
        this.replayId = replayId;
        this.isClosed = new AtomicBoolean(false);
        this.encoderLock = new io.sentry.util.a();
        this.lock = new io.sentry.util.a();
        this.framesLock = new io.sentry.util.a();
        this.replayCacheDir = l.a(new Function0<File>() { // from class: io.sentry.android.replay.ReplayCache$replayCacheDir$2
            {
                super(0);
            }

            @Override // kotlin.jvm.functions.Function0
            public final File invoke() {
                v5 v5Var;
                v vVar;
                ReplayCache.Companion companion = ReplayCache.INSTANCE;
                v5Var = ReplayCache.this.options;
                vVar = ReplayCache.this.replayId;
                return companion.makeReplayCacheDir(v5Var, vVar);
            }
        });
        this.frames = new ArrayList();
        this.ongoingSegment = new LinkedHashMap<>();
        this.ongoingSegmentFile = l.a(new Function0<File>() { // from class: io.sentry.android.replay.ReplayCache$ongoingSegmentFile$2
            {
                super(0);
            }

            @Override // kotlin.jvm.functions.Function0
            public final File invoke() {
                if (ReplayCache.this.getReplayCacheDir$sentry_android_replay_release() == null) {
                    return null;
                }
                File file = new File(ReplayCache.this.getReplayCacheDir$sentry_android_replay_release(), ReplayCache.ONGOING_SEGMENT);
                if (!file.exists()) {
                    file.createNewFile();
                }
                return file;
            }
        });
    }

    public static /* synthetic */ void addFrame$default(ReplayCache replayCache, File file, long j, String str, int i5, Object obj) {
        if ((i5 & 4) != 0) {
            str = null;
        }
        replayCache.addFrame(file, j, str);
    }

    public static /* synthetic */ void addFrame$sentry_android_replay_release$default(ReplayCache replayCache, Bitmap bitmap, long j, String str, int i5, Object obj) {
        if ((i5 & 4) != 0) {
            str = null;
        }
        replayCache.addFrame$sentry_android_replay_release(bitmap, j, str);
    }

    public static /* synthetic */ GeneratedVideo createVideoOf$default(ReplayCache replayCache, long j, long j5, int i5, int i6, int i10, int i11, int i12, File file, int i13, Object obj) {
        int i14;
        File file2;
        if ((i13 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0) {
            File replayCacheDir$sentry_android_replay_release = replayCache.getReplayCacheDir$sentry_android_replay_release();
            StringBuilder sb2 = new StringBuilder();
            i14 = i5;
            sb2.append(i14);
            sb2.append(".mp4");
            file2 = new File(replayCacheDir$sentry_android_replay_release, sb2.toString());
        } else {
            i14 = i5;
            file2 = file;
        }
        return replayCache.createVideoOf(j, j5, i14, i6, i10, i11, i12, file2);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void deleteFile(File file) {
        try {
            if (file.delete()) {
                return;
            }
            this.options.getLogger().u(SentryLevel.ERROR, "Failed to delete replay frame: %s", file.getAbsolutePath());
        } catch (Throwable th2) {
            this.options.getLogger().i(SentryLevel.ERROR, th2, "Failed to delete replay frame: %s", file.getAbsolutePath());
        }
    }

    private final boolean encode(ReplayFrame frame) {
        if (frame == null) {
            return false;
        }
        try {
            Bitmap decodeFile = BitmapFactory.decodeFile(frame.getScreenshot().getAbsolutePath());
            r a = this.encoderLock.a();
            try {
                SimpleVideoEncoder simpleVideoEncoder = this.encoder;
                if (simpleVideoEncoder != null) {
                    Intrinsics.checkNotNull(decodeFile);
                    simpleVideoEncoder.encode(decodeFile);
                    Unit unit = Unit.a;
                }
                ks.n.e(a, null);
                decodeFile.recycle();
                return true;
            } finally {
            }
        } catch (Throwable th2) {
            this.options.getLogger().k(SentryLevel.WARNING, "Unable to decode bitmap and encode it into a video, skipping frame", th2);
            return false;
        }
    }

    public final void addFrame(@NotNull File screenshot, long frameTimestamp, String screen) {
        Intrinsics.checkNotNullParameter(screenshot, "screenshot");
        ReplayFrame replayFrame = new ReplayFrame(screenshot, frameTimestamp, screen);
        r a = this.framesLock.a();
        try {
            this.frames.add(replayFrame);
            Unit unit = Unit.a;
            ks.n.e(a, null);
        } finally {
        }
    }

    public final void addFrame$sentry_android_replay_release(@NotNull Bitmap bitmap, long frameTimestamp, String screen) {
        Intrinsics.checkNotNullParameter(bitmap, "bitmap");
        if (getReplayCacheDir$sentry_android_replay_release() == null || bitmap.isRecycled()) {
            return;
        }
        File replayCacheDir$sentry_android_replay_release = getReplayCacheDir$sentry_android_replay_release();
        if (replayCacheDir$sentry_android_replay_release != null) {
            replayCacheDir$sentry_android_replay_release.mkdirs();
        }
        File file = new File(getReplayCacheDir$sentry_android_replay_release(), frameTimestamp + ".jpg");
        file.createNewFile();
        synchronized (bitmap) {
            if (bitmap.isRecycled()) {
                return;
            }
            FileOutputStream fileOutputStream = new FileOutputStream(file);
            try {
                bitmap.compress(Bitmap.CompressFormat.JPEG, this.options.getSessionReplay().f12108g.screenshotQuality, fileOutputStream);
                fileOutputStream.flush();
                Unit unit = Unit.a;
                fileOutputStream.close();
                addFrame(file, frameTimestamp, screen);
            } finally {
            }
        }
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public void close() {
        r a = this.encoderLock.a();
        try {
            SimpleVideoEncoder simpleVideoEncoder = this.encoder;
            if (simpleVideoEncoder != null) {
                simpleVideoEncoder.release();
            }
            this.encoder = null;
            Unit unit = Unit.a;
            ks.n.e(a, null);
            this.isClosed.set(true);
        } finally {
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:45:0x0138 A[LOOP:0: B:30:0x00cf->B:45:0x0138, LOOP_END] */
    /* JADX WARN: Removed duplicated region for block: B:46:0x013e A[EDGE_INSN: B:46:0x013e->B:47:0x013e BREAK  A[LOOP:0: B:30:0x00cf->B:45:0x0138], SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final GeneratedVideo createVideoOf(long duration, long from, int segmentId, int height, int width, int frameRate, int bitRate, @NotNull File videoFile) {
        r rVar;
        h hVar;
        int i5;
        long j;
        Intrinsics.checkNotNullParameter(videoFile, "videoFile");
        if (videoFile.exists() && videoFile.length() > 0) {
            videoFile.delete();
        }
        r a = this.framesLock.a();
        try {
            ArrayList arrayList = this.frames.isEmpty() ? new ArrayList() : CollectionsKt.j0(this.frames);
            ks.n.e(a, null);
            if (arrayList.isEmpty()) {
                this.options.getLogger().u(SentryLevel.DEBUG, "No captured frames, skipping generating a video segment", new Object[0]);
                return null;
            }
            r a10 = this.encoderLock.a();
            try {
                rVar = a10;
                try {
                    SimpleVideoEncoder simpleVideoEncoder = new SimpleVideoEncoder(this.options, new MuxerConfig(videoFile, width, height, frameRate, bitRate, null, 32, null), null, 4, null);
                    simpleVideoEncoder.start();
                    ks.n.e(rVar, null);
                    this.encoder = simpleVideoEncoder;
                    long j5 = 1000 / frameRate;
                    Object firstOrNull = CollectionsKt.firstOrNull(arrayList);
                    long j7 = from + duration;
                    if (j7 <= Long.MIN_VALUE) {
                        h.f21004w.getClass();
                        hVar = h.f21005x;
                    } else {
                        hVar = new h(from, j7 - 1);
                    }
                    e h6 = j.h(hVar, j5);
                    long j10 = h6.f20997d;
                    long j11 = h6.f20998e;
                    long j12 = h6.f20999i;
                    if ((j12 <= 0 || j10 > j11) && (j12 >= 0 || j11 > j10)) {
                        i5 = 0;
                    } else {
                        Object obj = firstOrNull;
                        long j13 = j10;
                        int i6 = 0;
                        while (true) {
                            Iterator it = arrayList.iterator();
                            while (true) {
                                if (!it.hasNext()) {
                                    break;
                                }
                                ReplayFrame replayFrame = (ReplayFrame) it.next();
                                long j14 = j13 + j5;
                                long timestamp = replayFrame.getTimestamp();
                                if (j13 <= timestamp && timestamp <= j14) {
                                    obj = replayFrame;
                                    break;
                                }
                                if (replayFrame.getTimestamp() > j14) {
                                    break;
                                }
                            }
                            if (encode((ReplayFrame) obj)) {
                                i6++;
                            } else if (obj != null) {
                                deleteFile(((ReplayFrame) obj).getScreenshot());
                                a = this.framesLock.a();
                                j = j12;
                                try {
                                    TypeIntrinsics.asMutableCollection(this.frames).remove(obj);
                                    ks.n.e(a, null);
                                    arrayList.remove(obj);
                                    obj = null;
                                    if (j13 != j11) {
                                        break;
                                    }
                                    j13 += j;
                                    j12 = j;
                                } finally {
                                }
                            }
                            j = j12;
                            if (j13 != j11) {
                            }
                        }
                        i5 = i6;
                    }
                    if (i5 == 0) {
                        this.options.getLogger().u(SentryLevel.DEBUG, "Generated a video with no frames, not capturing a replay segment", new Object[0]);
                        deleteFile(videoFile);
                        return null;
                    }
                    a = this.encoderLock.a();
                    try {
                        SimpleVideoEncoder simpleVideoEncoder2 = this.encoder;
                        if (simpleVideoEncoder2 != null) {
                            simpleVideoEncoder2.release();
                        }
                        SimpleVideoEncoder simpleVideoEncoder3 = this.encoder;
                        long duration2 = simpleVideoEncoder3 != null ? simpleVideoEncoder3.getDuration() : 0L;
                        this.encoder = null;
                        Unit unit = Unit.a;
                        ks.n.e(a, null);
                        rotate$sentry_android_replay_release(j7);
                        return new GeneratedVideo(videoFile, i5, duration2);
                    } finally {
                    }
                } catch (Throwable th2) {
                    th = th2;
                    Throwable th3 = th;
                    try {
                        throw th3;
                    } catch (Throwable th4) {
                        ks.n.e(rVar, th3);
                        throw th4;
                    }
                }
            } catch (Throwable th5) {
                th = th5;
                rVar = a10;
            }
        } finally {
            try {
                throw th;
            } finally {
            }
        }
    }

    public final Long firstFrameTimestamp$sentry_android_replay_release() {
        r a = this.framesLock.a();
        try {
            ReplayFrame replayFrame = (ReplayFrame) CollectionsKt.firstOrNull(this.frames);
            Long valueOf = replayFrame != null ? Long.valueOf(replayFrame.getTimestamp()) : null;
            ks.n.e(a, null);
            return valueOf;
        } finally {
        }
    }

    @NotNull
    public final List<ReplayFrame> getFrames$sentry_android_replay_release() {
        return this.frames;
    }

    public final File getOngoingSegmentFile$sentry_android_replay_release() {
        return (File) this.ongoingSegmentFile.getValue();
    }

    public final File getReplayCacheDir$sentry_android_replay_release() {
        return (File) this.replayCacheDir.getValue();
    }

    public final void persistSegmentValues$sentry_android_replay_release(@NotNull String key, String value) {
        File ongoingSegmentFile$sentry_android_replay_release;
        File ongoingSegmentFile$sentry_android_replay_release2;
        List split$default;
        Intrinsics.checkNotNullParameter(key, "key");
        r a = this.lock.a();
        try {
            if (this.isClosed.get()) {
                ks.n.e(a, null);
                return;
            }
            File ongoingSegmentFile$sentry_android_replay_release3 = getOngoingSegmentFile$sentry_android_replay_release();
            if ((ongoingSegmentFile$sentry_android_replay_release3 == null || !ongoingSegmentFile$sentry_android_replay_release3.exists()) && (ongoingSegmentFile$sentry_android_replay_release = getOngoingSegmentFile$sentry_android_replay_release()) != null) {
                ongoingSegmentFile$sentry_android_replay_release.createNewFile();
            }
            if (this.ongoingSegment.isEmpty() && (ongoingSegmentFile$sentry_android_replay_release2 = getOngoingSegmentFile$sentry_android_replay_release()) != null) {
                BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(new FileInputStream(ongoingSegmentFile$sentry_android_replay_release2), Charsets.UTF_8), 8192);
                try {
                    kr.a B = d9.a.B(bufferedReader);
                    LinkedHashMap<String, String> linkedHashMap = this.ongoingSegment;
                    Iterator it = B.iterator();
                    while (it.hasNext()) {
                        split$default = StringsKt__StringsKt.split$default((String) it.next(), new String[]{"="}, false, 2, 2, null);
                        linkedHashMap.put((String) split$default.get(0), (String) split$default.get(1));
                    }
                    bufferedReader.close();
                } finally {
                }
            }
            if (value == null) {
                this.ongoingSegment.remove(key);
            } else {
                this.ongoingSegment.put(key, value);
            }
            File ongoingSegmentFile$sentry_android_replay_release4 = getOngoingSegmentFile$sentry_android_replay_release();
            if (ongoingSegmentFile$sentry_android_replay_release4 != null) {
                Set<Map.Entry<String, String>> entrySet = this.ongoingSegment.entrySet();
                Intrinsics.checkNotNullExpressionValue(entrySet, "<get-entries>(...)");
                qo.l.d(ongoingSegmentFile$sentry_android_replay_release4, CollectionsKt.O(entrySet, ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE, null, null, new Function1<Map.Entry<String, String>, CharSequence>() { // from class: io.sentry.android.replay.ReplayCache$persistSegmentValues$1$2
                    @Override // kotlin.jvm.functions.Function1
                    public final CharSequence invoke(Map.Entry<String, String> entry) {
                        Intrinsics.checkNotNullParameter(entry, "<name for destructuring parameter 0>");
                        return entry.getKey() + '=' + entry.getValue();
                    }
                }, 30));
                Unit unit = Unit.a;
            }
            ks.n.e(a, null);
        } finally {
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final String rotate$sentry_android_replay_release(final long until) {
        final Ref.ObjectRef objectRef = new Ref.ObjectRef();
        r a = this.framesLock.a();
        try {
            h0.s(this.frames, new Function1<ReplayFrame, Boolean>() { // from class: io.sentry.android.replay.ReplayCache$rotate$1$1
                /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
                {
                    super(1);
                }

                /* JADX WARN: Type inference failed for: r5v2, types: [T, java.lang.String] */
                @Override // kotlin.jvm.functions.Function1
                public final Boolean invoke(ReplayFrame it) {
                    Intrinsics.checkNotNullParameter(it, "it");
                    if (it.getTimestamp() < until) {
                        this.deleteFile(it.getScreenshot());
                        return Boolean.TRUE;
                    }
                    Ref.ObjectRef<String> objectRef2 = objectRef;
                    if (objectRef2.element == null) {
                        objectRef2.element = it.getScreen();
                    }
                    return Boolean.FALSE;
                }
            });
            ks.n.e(a, null);
            return (String) objectRef.element;
        } finally {
        }
    }
}
