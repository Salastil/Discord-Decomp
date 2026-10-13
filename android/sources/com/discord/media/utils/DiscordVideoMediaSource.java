package com.discord.media.utils;

import android.content.Context;
import android.media.CamcorderProfile;
import android.media.MediaFormat;
import android.media.MediaMetadataRetriever;
import android.net.Uri;
import android.os.Build;
import androidx.core.view.p1;
import com.discord.jank_stats.JankRecordStore;
import com.discord.jank_stats.JankScreenContext;
import com.linkedin.android.litr.io.MediaRange;
import fo.q;
import fo.r;
import java.nio.ByteBuffer;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.TimeUnit;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.Result;
import kotlin.Unit;
import kotlin.collections.d0;
import kotlin.collections.r0;
import kotlin.collections.v0;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.ranges.IntRange;
import kotlin.text.StringsKt;
import kotlin.text.x;
import org.jetbrains.annotations.NotNull;
import org.webrtc.MediaStreamTrack;
import yo.b;
import yo.j;

@Metadata(d1 = {"\u0000f\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\b\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010$\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u000b\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\u0007\n\u0002\b\t\b\u0000\u0018\u0000 =2\u00020\u0001:\u0002>=B\u0017\u0012\u0006\u0010\u0003\u001a\u00020\u0002\u0012\u0006\u0010\u0005\u001a\u00020\u0004¢\u0006\u0004\b\u0006\u0010\u0007J\u001f\u0010\t\u001a\u00020\b2\u0006\u0010\u0003\u001a\u00020\u00022\u0006\u0010\u0005\u001a\u00020\u0004H\u0002¢\u0006\u0004\b\t\u0010\nJ'\u0010\u000e\u001a\u00020\b2\u0006\u0010\u000b\u001a\u00020\b2\u0006\u0010\f\u001a\u00020\b2\u0006\u0010\r\u001a\u00020\bH\u0002¢\u0006\u0004\b\u000e\u0010\u000fJ'\u0010\u0010\u001a\u00020\b2\u0006\u0010\u000b\u001a\u00020\b2\u0006\u0010\f\u001a\u00020\b2\u0006\u0010\r\u001a\u00020\bH\u0002¢\u0006\u0004\b\u0010\u0010\u000fJ\u001b\u0010\u0013\u001a\u0004\u0018\u00010\u00112\b\u0010\u0012\u001a\u0004\u0018\u00010\u0011H\u0002¢\u0006\u0004\b\u0013\u0010\u0014J\u001d\u0010\u0017\u001a\u0004\u0018\u00010\b*\u00020\u00112\u0006\u0010\u0016\u001a\u00020\u0015H\u0002¢\u0006\u0004\b\u0017\u0010\u0018J\u001d\u0010\u001a\u001a\u0004\u0018\u00010\u0019*\u00020\u00112\u0006\u0010\u0016\u001a\u00020\u0015H\u0002¢\u0006\u0004\b\u001a\u0010\u001bJ\u0019\u0010\u001e\u001a\u000e\u0012\u0004\u0012\u00020\u0015\u0012\u0004\u0012\u00020\u001d0\u001c¢\u0006\u0004\b\u001e\u0010\u001fJ\u000f\u0010!\u001a\u0004\u0018\u00010 ¢\u0006\u0004\b!\u0010\"R\u0017\u0010\u0005\u001a\u00020\u00048\u0006¢\u0006\f\n\u0004\b\u0005\u0010#\u001a\u0004\b$\u0010%R\u001f\u0010(\u001a\r\u0012\t\u0012\u00070\u0011¢\u0006\u0002\b'0&8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b(\u0010)R\u0016\u0010*\u001a\u0004\u0018\u00010\u00118\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b*\u0010+R\u0016\u0010\u0012\u001a\u0004\u0018\u00010\u00118\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u0012\u0010+R\u0014\u0010\u000b\u001a\u00020\b8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u000b\u0010,R\u0014\u0010\f\u001a\u00020\b8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\f\u0010,R\u0014\u0010-\u001a\u00020\b8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b-\u0010,R\u0014\u0010.\u001a\u00020\u00158\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b.\u0010/R\u0014\u00100\u001a\u00020\u00158\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b0\u0010/R\u0014\u00101\u001a\u00020\b8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b1\u0010,R\u0014\u00102\u001a\u00020\b8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b2\u0010,R\u0014\u00104\u001a\u0002038\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b4\u00105R\u0014\u0010\r\u001a\u00020\b8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\r\u0010,R\u0014\u00107\u001a\u0002068\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b7\u00108R\u0014\u00109\u001a\u00020\b8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b9\u0010,R\u0019\u0010:\u001a\u0004\u0018\u00010\u00118\u0006¢\u0006\f\n\u0004\b:\u0010+\u001a\u0004\b;\u0010<¨\u0006?"}, d2 = {"Lcom/discord/media/utils/DiscordVideoMediaSource;", "Lvk/a;", "Landroid/content/Context;", "context", "Landroid/net/Uri;", "inputUri", "<init>", "(Landroid/content/Context;Landroid/net/Uri;)V", "", "extractVideoRotationFromMetadata", "(Landroid/content/Context;Landroid/net/Uri;)I", "width", "height", "frameRate", "getAVCBitrate", "(III)I", "getDefaultBitrate", "Landroid/media/MediaFormat;", "srcAudioFormat", "getAudioFormatWithBitrate", "(Landroid/media/MediaFormat;)Landroid/media/MediaFormat;", "", "key", "getIntegerOrNull", "(Landroid/media/MediaFormat;Ljava/lang/String;)Ljava/lang/Integer;", "Ljava/nio/ByteBuffer;", "getByteBufferOrNull", "(Landroid/media/MediaFormat;Ljava/lang/String;)Ljava/nio/ByteBuffer;", "", "", "getMetadata", "()Ljava/util/Map;", "Lcom/discord/media/utils/DiscordVideoMediaSource$ColorFormatSettings;", "getColorFormatSettings", "()Lcom/discord/media/utils/DiscordVideoMediaSource$ColorFormatSettings;", "Landroid/net/Uri;", "getInputUri", "()Landroid/net/Uri;", "", "Lkotlin/jvm/internal/EnhancedNullability;", "srcTrackFormats", "Ljava/util/List;", "srcVideoFormat", "Landroid/media/MediaFormat;", "I", "bitRate", "videoFormat", "Ljava/lang/String;", "profile", "level", "durationMs", "", "isHDRContent", "Z", "", "keyFrameIntervalSeconds", "F", "rotationDegrees", "audioFormat", "getAudioFormat", "()Landroid/media/MediaFormat;", "Companion", "ColorFormatSettings", "media_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nDiscordVideoMediaSource.kt\nKotlin\n*S Kotlin\n*F\n+ 1 DiscordVideoMediaSource.kt\ncom/discord/media/utils/DiscordVideoMediaSource\n+ 2 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n+ 3 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,236:1\n1563#2:237\n1634#2,3:238\n295#2,2:241\n295#2,2:243\n1#3:245\n*S KotlinDebug\n*F\n+ 1 DiscordVideoMediaSource.kt\ncom/discord/media/utils/DiscordVideoMediaSource\n*L\n22#1:237\n22#1:238,3\n23#1:241,2\n24#1:243,2\n*E\n"})
/* loaded from: classes.dex */
public final class DiscordVideoMediaSource extends vk.a {

    @NotNull
    private static final Companion Companion = new Companion(null);

    @Deprecated
    public static final int DEFAULT_FRAME_RATE = 30;

    @Deprecated
    public static final int DEFAULT_HEIGHT = 480;

    @Deprecated
    public static final float DEFAULT_KEY_FRAME_INTERVAL_SECONDS = 5.0f;

    @Deprecated
    public static final int DEFAULT_WIDTH = 640;
    private final MediaFormat audioFormat;
    private final int bitRate;
    private final int durationMs;
    private final int frameRate;
    private final int height;

    @NotNull
    private final Uri inputUri;
    private final boolean isHDRContent;
    private final float keyFrameIntervalSeconds;
    private final int level;

    @NotNull
    private final String profile;
    private final int rotationDegrees;
    private final MediaFormat srcAudioFormat;

    @NotNull
    private final List<MediaFormat> srcTrackFormats;
    private final MediaFormat srcVideoFormat;

    @NotNull
    private final String videoFormat;
    private final int width;

    @Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0010\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\b\u0086\b\u0018\u00002\u00020\u0001B/\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0005\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0006\u001a\u0004\u0018\u00010\u0007¢\u0006\u0004\b\b\u0010\tJ\u0010\u0010\u0011\u001a\u0004\u0018\u00010\u0003HÆ\u0003¢\u0006\u0002\u0010\u000bJ\u0010\u0010\u0012\u001a\u0004\u0018\u00010\u0003HÆ\u0003¢\u0006\u0002\u0010\u000bJ\u0010\u0010\u0013\u001a\u0004\u0018\u00010\u0003HÆ\u0003¢\u0006\u0002\u0010\u000bJ\u000b\u0010\u0014\u001a\u0004\u0018\u00010\u0007HÆ\u0003J>\u0010\u0015\u001a\u00020\u00002\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0007HÆ\u0001¢\u0006\u0002\u0010\u0016J\u0013\u0010\u0017\u001a\u00020\u00182\b\u0010\u0019\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u001a\u001a\u00020\u0003HÖ\u0001J\t\u0010\u001b\u001a\u00020\u001cHÖ\u0001R\u0015\u0010\u0002\u001a\u0004\u0018\u00010\u0003¢\u0006\n\n\u0002\u0010\f\u001a\u0004\b\n\u0010\u000bR\u0015\u0010\u0004\u001a\u0004\u0018\u00010\u0003¢\u0006\n\n\u0002\u0010\f\u001a\u0004\b\r\u0010\u000bR\u0015\u0010\u0005\u001a\u0004\u0018\u00010\u0003¢\u0006\n\n\u0002\u0010\f\u001a\u0004\b\u000e\u0010\u000bR\u0013\u0010\u0006\u001a\u0004\u0018\u00010\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\u0010¨\u0006\u001d"}, d2 = {"Lcom/discord/media/utils/DiscordVideoMediaSource$ColorFormatSettings;", "", "colorTransfer", "", "colorStandard", "colorRange", "hdrStaticInfo", "Ljava/nio/ByteBuffer;", "<init>", "(Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/nio/ByteBuffer;)V", "getColorTransfer", "()Ljava/lang/Integer;", "Ljava/lang/Integer;", "getColorStandard", "getColorRange", "getHdrStaticInfo", "()Ljava/nio/ByteBuffer;", "component1", "component2", "component3", "component4", "copy", "(Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/nio/ByteBuffer;)Lcom/discord/media/utils/DiscordVideoMediaSource$ColorFormatSettings;", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "", "media_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final /* data */ class ColorFormatSettings {
        private final Integer colorRange;
        private final Integer colorStandard;
        private final Integer colorTransfer;
        private final ByteBuffer hdrStaticInfo;

        public ColorFormatSettings(Integer num, Integer num2, Integer num3, ByteBuffer byteBuffer) {
            this.colorTransfer = num;
            this.colorStandard = num2;
            this.colorRange = num3;
            this.hdrStaticInfo = byteBuffer;
        }

        public static /* synthetic */ ColorFormatSettings copy$default(ColorFormatSettings colorFormatSettings, Integer num, Integer num2, Integer num3, ByteBuffer byteBuffer, int i5, Object obj) {
            if ((i5 & 1) != 0) {
                num = colorFormatSettings.colorTransfer;
            }
            if ((i5 & 2) != 0) {
                num2 = colorFormatSettings.colorStandard;
            }
            if ((i5 & 4) != 0) {
                num3 = colorFormatSettings.colorRange;
            }
            if ((i5 & 8) != 0) {
                byteBuffer = colorFormatSettings.hdrStaticInfo;
            }
            return colorFormatSettings.copy(num, num2, num3, byteBuffer);
        }

        /* renamed from: component1, reason: from getter */
        public final Integer getColorTransfer() {
            return this.colorTransfer;
        }

        /* renamed from: component2, reason: from getter */
        public final Integer getColorStandard() {
            return this.colorStandard;
        }

        /* renamed from: component3, reason: from getter */
        public final Integer getColorRange() {
            return this.colorRange;
        }

        /* renamed from: component4, reason: from getter */
        public final ByteBuffer getHdrStaticInfo() {
            return this.hdrStaticInfo;
        }

        @NotNull
        public final ColorFormatSettings copy(Integer colorTransfer, Integer colorStandard, Integer colorRange, ByteBuffer hdrStaticInfo) {
            return new ColorFormatSettings(colorTransfer, colorStandard, colorRange, hdrStaticInfo);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!(other instanceof ColorFormatSettings)) {
                return false;
            }
            ColorFormatSettings colorFormatSettings = (ColorFormatSettings) other;
            return Intrinsics.areEqual(this.colorTransfer, colorFormatSettings.colorTransfer) && Intrinsics.areEqual(this.colorStandard, colorFormatSettings.colorStandard) && Intrinsics.areEqual(this.colorRange, colorFormatSettings.colorRange) && Intrinsics.areEqual(this.hdrStaticInfo, colorFormatSettings.hdrStaticInfo);
        }

        public final Integer getColorRange() {
            return this.colorRange;
        }

        public final Integer getColorStandard() {
            return this.colorStandard;
        }

        public final Integer getColorTransfer() {
            return this.colorTransfer;
        }

        public final ByteBuffer getHdrStaticInfo() {
            return this.hdrStaticInfo;
        }

        public int hashCode() {
            Integer num = this.colorTransfer;
            int hashCode = (num == null ? 0 : num.hashCode()) * 31;
            Integer num2 = this.colorStandard;
            int hashCode2 = (hashCode + (num2 == null ? 0 : num2.hashCode())) * 31;
            Integer num3 = this.colorRange;
            int hashCode3 = (hashCode2 + (num3 == null ? 0 : num3.hashCode())) * 31;
            ByteBuffer byteBuffer = this.hdrStaticInfo;
            return hashCode3 + (byteBuffer != null ? byteBuffer.hashCode() : 0);
        }

        @NotNull
        public String toString() {
            return "ColorFormatSettings(colorTransfer=" + this.colorTransfer + ", colorStandard=" + this.colorStandard + ", colorRange=" + this.colorRange + ", hdrStaticInfo=" + this.hdrStaticInfo + ")";
        }
    }

    @Metadata(d1 = {"\u0000\u001a\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u0007\n\u0000\b\u0082\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003R\u000e\u0010\u0004\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\tX\u0086T¢\u0006\u0002\n\u0000¨\u0006\n"}, d2 = {"Lcom/discord/media/utils/DiscordVideoMediaSource$Companion;", "", "<init>", "()V", "DEFAULT_WIDTH", "", "DEFAULT_HEIGHT", "DEFAULT_FRAME_RATE", "DEFAULT_KEY_FRAME_INTERVAL_SECONDS", "", "media_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public DiscordVideoMediaSource(@NotNull Context context, @NotNull Uri inputUri) {
        super(context, inputUri, new MediaRange());
        boolean z5;
        Object obj;
        Object obj2;
        Object i5;
        Object i6;
        Object i10;
        Object i11;
        Object i12;
        Object i13;
        Object i14;
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(inputUri, "inputUri");
        this.inputUri = inputUri;
        IntRange i15 = j.i(0, getTrackCount());
        ArrayList arrayList = new ArrayList(d0.l(i15, 10));
        Iterator it = i15.iterator();
        while (((b) it).f20994i) {
            arrayList.add(getTrackFormat(((r0) it).nextInt()));
        }
        this.srcTrackFormats = arrayList;
        Iterator it2 = arrayList.iterator();
        while (true) {
            z5 = true;
            obj = null;
            if (!it2.hasNext()) {
                obj2 = null;
                break;
            }
            obj2 = it2.next();
            MediaFormat mediaFormat = (MediaFormat) obj2;
            Intrinsics.checkNotNull(mediaFormat);
            String mimeType = MediaFormatUtilsKt.getMimeType(mediaFormat);
            if (mimeType != null && x.o(mimeType, MediaStreamTrack.VIDEO_TRACK_KIND, false)) {
                break;
            }
        }
        this.srcVideoFormat = (MediaFormat) obj2;
        Iterator<T> it3 = this.srcTrackFormats.iterator();
        while (true) {
            if (!it3.hasNext()) {
                break;
            }
            Object next = it3.next();
            MediaFormat mediaFormat2 = (MediaFormat) next;
            Intrinsics.checkNotNull(mediaFormat2);
            String mimeType2 = MediaFormatUtilsKt.getMimeType(mediaFormat2);
            if (mimeType2 != null && x.o(mimeType2, MediaStreamTrack.AUDIO_TRACK_KIND, false)) {
                obj = next;
                break;
            }
        }
        this.srcAudioFormat = (MediaFormat) obj;
        MediaFormat mediaFormat3 = this.srcVideoFormat;
        String str = JankScreenContext.UNKNOWN_SCREEN;
        if (mediaFormat3 != null) {
            try {
                q qVar = Result.f13476e;
                i5 = Integer.valueOf(mediaFormat3.getInteger("width"));
            } catch (Throwable th2) {
                q qVar2 = Result.f13476e;
                i5 = ki.b.i(th2);
            }
            this.width = ((Number) (i5 instanceof r ? Integer.valueOf(DEFAULT_WIDTH) : i5)).intValue();
            try {
                i6 = Integer.valueOf(mediaFormat3.getInteger("height"));
            } catch (Throwable th3) {
                q qVar3 = Result.f13476e;
                i6 = ki.b.i(th3);
            }
            this.height = ((Number) (i6 instanceof r ? Integer.valueOf(DEFAULT_HEIGHT) : i6)).intValue();
            String profileName = MediaFormatUtilsKt.getProfileName(mediaFormat3);
            this.profile = profileName == null ? JankScreenContext.UNKNOWN_SCREEN : profileName;
            Integer level = MediaFormatUtilsKt.getLevel(mediaFormat3);
            this.level = level != null ? level.intValue() : 0;
            this.durationMs = (int) TimeUnit.MICROSECONDS.toMillis(mediaFormat3.getLong("durationUs"));
            String codecType = MediaFormatUtilsKt.getCodecType(mediaFormat3);
            this.videoFormat = codecType != null ? codecType : str;
            if ((!mediaFormat3.containsKey("color-transfer") || (mediaFormat3.getInteger("color-transfer") != 7 && mediaFormat3.getInteger("color-transfer") != 6)) && (!mediaFormat3.containsKey("color-standard") || mediaFormat3.getInteger("color-standard") != 6)) {
                z5 = false;
            }
            this.isHDRContent = z5;
            try {
                i10 = Integer.valueOf(mediaFormat3.getInteger("frame-rate"));
            } catch (Throwable th4) {
                q qVar4 = Result.f13476e;
                i10 = ki.b.i(th4);
            }
            if (Result.a(i10) != null) {
                try {
                    i11 = Integer.valueOf((int) mediaFormat3.getFloat("frame-rate"));
                } catch (Throwable th5) {
                    q qVar5 = Result.f13476e;
                    i11 = ki.b.i(th5);
                }
                i10 = i11;
            }
            this.frameRate = ((Number) (i10 instanceof r ? 30 : i10)).intValue();
            this.bitRate = d9.a.m(this, this.srcTrackFormats.indexOf(mediaFormat3));
            try {
                i12 = Float.valueOf(mediaFormat3.getFloat("i-frame-interval"));
            } catch (Throwable th6) {
                q qVar6 = Result.f13476e;
                i12 = ki.b.i(th6);
            }
            if (Result.a(i12) != null) {
                try {
                    i13 = Float.valueOf(mediaFormat3.getInteger("i-frame-interval"));
                } catch (Throwable th7) {
                    q qVar7 = Result.f13476e;
                    i13 = ki.b.i(th7);
                }
                i12 = i13;
            }
            this.keyFrameIntervalSeconds = ((Number) (i12 instanceof r ? Float.valueOf(5.0f) : i12)).floatValue();
            try {
                i14 = Integer.valueOf(mediaFormat3.containsKey("rotation-degrees") ? mediaFormat3.getInteger("rotation-degrees") : extractVideoRotationFromMetadata(context, this.inputUri));
            } catch (Throwable th8) {
                q qVar8 = Result.f13476e;
                i14 = ki.b.i(th8);
            }
            this.rotationDegrees = ((Number) (i14 instanceof r ? 0 : i14)).intValue();
        } else {
            this.width = DEFAULT_WIDTH;
            this.height = DEFAULT_HEIGHT;
            this.frameRate = 30;
            this.bitRate = getAVCBitrate(DEFAULT_WIDTH, DEFAULT_HEIGHT, 30);
            this.keyFrameIntervalSeconds = 5.0f;
            this.videoFormat = JankScreenContext.UNKNOWN_SCREEN;
            this.profile = JankScreenContext.UNKNOWN_SCREEN;
            this.level = 0;
            this.durationMs = 0;
            this.isHDRContent = false;
            this.rotationDegrees = 0;
        }
        this.audioFormat = getAudioFormatWithBitrate(this.srcAudioFormat);
    }

    private final int extractVideoRotationFromMetadata(Context context, Uri inputUri) {
        Integer intOrNull;
        MediaMetadataRetriever mediaMetadataRetriever = new MediaMetadataRetriever();
        try {
            mediaMetadataRetriever.setDataSource(context, inputUri);
            String extractMetadata = mediaMetadataRetriever.extractMetadata(24);
            int intValue = (extractMetadata == null || (intOrNull = StringsKt.toIntOrNull(extractMetadata)) == null) ? 0 : intOrNull.intValue();
            try {
                return intValue;
            } catch (Throwable th2) {
                return intValue;
            }
        } finally {
            try {
                q qVar = Result.f13476e;
                mediaMetadataRetriever.release();
                Unit unit = Unit.a;
            } catch (Throwable th22) {
                q qVar2 = Result.f13476e;
                ki.b.i(th22);
            }
        }
    }

    private final int getAVCBitrate(int width, int height, int frameRate) {
        int[] iArr = {8, 6, 5, 4, 0};
        int i5 = -1;
        for (int i6 = 0; i6 < 2; i6++) {
            int i10 = 0;
            while (true) {
                if (i10 < 5) {
                    int i11 = iArr[i10];
                    if (CamcorderProfile.hasProfile(i6, i11)) {
                        CamcorderProfile camcorderProfile = CamcorderProfile.get(i6, i11);
                        int i12 = camcorderProfile.videoFrameWidth;
                        boolean z5 = width == i12 && height == camcorderProfile.videoFrameHeight;
                        boolean z6 = height == i12 && width == camcorderProfile.videoFrameHeight;
                        if ((z5 || z6) && frameRate == camcorderProfile.videoFrameRate && camcorderProfile.videoCodec == 2) {
                            int i13 = camcorderProfile.videoBitRate;
                            if (i5 < i13) {
                                i5 = i13;
                            }
                        }
                    }
                    i10++;
                }
            }
        }
        Integer valueOf = Integer.valueOf(i5);
        if (valueOf.intValue() == -1) {
            valueOf = null;
        }
        return valueOf != null ? valueOf.intValue() : getDefaultBitrate(width, height, frameRate);
    }

    private final MediaFormat getAudioFormatWithBitrate(MediaFormat srcAudioFormat) {
        if (srcAudioFormat == null || srcAudioFormat.containsKey("bitrate")) {
            return null;
        }
        if (Build.VERSION.SDK_INT < 29) {
            srcAudioFormat.setInteger("bitrate", 256000);
            return srcAudioFormat;
        }
        MediaFormat c6 = p1.c(srcAudioFormat);
        c6.setInteger("bitrate", 256000);
        return c6;
    }

    private final ByteBuffer getByteBufferOrNull(MediaFormat mediaFormat, String str) {
        if (mediaFormat.containsKey(str)) {
            return mediaFormat.getByteBuffer(str);
        }
        return null;
    }

    private final int getDefaultBitrate(int width, int height, int frameRate) {
        return (int) (width * height * frameRate * 0.25d);
    }

    private final Integer getIntegerOrNull(MediaFormat mediaFormat, String str) {
        if (mediaFormat.containsKey(str)) {
            return Integer.valueOf(mediaFormat.getInteger(str));
        }
        return null;
    }

    public final MediaFormat getAudioFormat() {
        return this.audioFormat;
    }

    public final ColorFormatSettings getColorFormatSettings() {
        MediaFormat mediaFormat;
        if (!this.isHDRContent || (mediaFormat = this.srcVideoFormat) == null) {
            return null;
        }
        return new ColorFormatSettings(getIntegerOrNull(mediaFormat, "color-transfer"), getIntegerOrNull(this.srcVideoFormat, "color-standard"), getIntegerOrNull(this.srcVideoFormat, "color-range"), getByteBufferOrNull(this.srcVideoFormat, "hdr-static-info"));
    }

    @NotNull
    public final Uri getInputUri() {
        return this.inputUri;
    }

    @NotNull
    public final Map<String, Object> getMetadata() {
        return v0.g(new Pair("width", Integer.valueOf(this.width)), new Pair("height", Integer.valueOf(this.height)), new Pair("bitRate", Integer.valueOf(this.bitRate)), new Pair("frameRate", Integer.valueOf(this.frameRate)), new Pair("format", this.videoFormat), new Pair("isHDRContent", Boolean.valueOf(this.isHDRContent)), new Pair("rotationDegrees", Integer.valueOf(this.rotationDegrees)), new Pair("durationMs", Integer.valueOf(this.durationMs)), new Pair("sourceProfile", this.profile), new Pair("sourceLevel", Integer.valueOf(this.level)));
    }
}
