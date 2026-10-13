package com.discord.media_player;

import a3.e;
import androidx.recyclerview.widget.RecyclerView;
import com.discord.jank_stats.JankRecordStore;
import com.discord.primitives.ChannelId;
import com.discord.primitives.MessageId;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import fo.n;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000<\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0006\n\u0002\b3\b\u0086\b\u0018\u00002\u00020\u0001B\u008b\u0001\u0012\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0007\u0012\u0006\u0010\b\u001a\u00020\u0003\u0012\u0006\u0010\t\u001a\u00020\n\u0012\b\b\u0002\u0010\u000b\u001a\u00020\f\u0012\b\u0010\r\u001a\u0004\u0018\u00010\u000e\u0012\n\b\u0002\u0010\u000f\u001a\u0004\u0018\u00010\u0010\u0012\n\b\u0002\u0010\u0011\u001a\u0004\u0018\u00010\u0007\u0012\n\b\u0002\u0010\u0012\u001a\u0004\u0018\u00010\u0013\u0012\n\b\u0002\u0010\u0014\u001a\u0004\u0018\u00010\f¢\u0006\u0004\b\u0015\u0010\u0016J\u000b\u00101\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u000b\u00102\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u000b\u00103\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u0010\u00104\u001a\u0004\u0018\u00010\u0007HÆ\u0003¢\u0006\u0002\u0010\u001cJ\t\u00105\u001a\u00020\u0003HÆ\u0003J\t\u00106\u001a\u00020\nHÆ\u0003J\t\u00107\u001a\u00020\fHÆ\u0003J\u0010\u00108\u001a\u0004\u0018\u00010\u000eHÆ\u0003¢\u0006\u0002\b9J\u0012\u0010:\u001a\u0004\u0018\u00010\u0010HÆ\u0003¢\u0006\u0004\b;\u0010\u0018J\u0010\u0010<\u001a\u0004\u0018\u00010\u0007HÆ\u0003¢\u0006\u0002\u0010\u001cJ\u0010\u0010=\u001a\u0004\u0018\u00010\u0013HÆ\u0003¢\u0006\u0002\u0010)J\u0010\u0010>\u001a\u0004\u0018\u00010\fHÆ\u0003¢\u0006\u0002\u0010,J\u009a\u0001\u0010?\u001a\u00020\u00002\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u00072\b\b\u0002\u0010\b\u001a\u00020\u00032\b\b\u0002\u0010\t\u001a\u00020\n2\b\b\u0002\u0010\u000b\u001a\u00020\f2\n\b\u0002\u0010\r\u001a\u0004\u0018\u00010\u000e2\n\b\u0002\u0010\u000f\u001a\u0004\u0018\u00010\u00102\n\b\u0002\u0010\u0011\u001a\u0004\u0018\u00010\u00072\n\b\u0002\u0010\u0012\u001a\u0004\u0018\u00010\u00132\n\b\u0002\u0010\u0014\u001a\u0004\u0018\u00010\fHÆ\u0001¢\u0006\u0004\b@\u0010AJ\u0013\u0010B\u001a\u00020\f2\b\u0010C\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010D\u001a\u00020\u0007HÖ\u0001J\t\u0010E\u001a\u00020\u0003HÖ\u0001R\u0013\u0010\u0002\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0017\u0010\u0018R\u0013\u0010\u0004\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0019\u0010\u0018R\u0013\u0010\u0005\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u001a\u0010\u0018R\u0015\u0010\u0006\u001a\u0004\u0018\u00010\u0007¢\u0006\n\n\u0002\u0010\u001d\u001a\u0004\b\u001b\u0010\u001cR\u0011\u0010\b\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u001e\u0010\u0018R\u0011\u0010\t\u001a\u00020\n¢\u0006\b\n\u0000\u001a\u0004\b\u001f\u0010 R\u0011\u0010\u000b\u001a\u00020\f¢\u0006\b\n\u0000\u001a\u0004\b!\u0010\"R\u0013\u0010\r\u001a\u0004\u0018\u00010\u000e¢\u0006\b\n\u0000\u001a\u0004\b#\u0010$R\u0015\u0010\u000f\u001a\u0004\u0018\u00010\u0010¢\u0006\n\n\u0002\u0010&\u001a\u0004\b%\u0010\u0018R\u0015\u0010\u0011\u001a\u0004\u0018\u00010\u0007¢\u0006\n\n\u0002\u0010\u001d\u001a\u0004\b'\u0010\u001cR\u0015\u0010\u0012\u001a\u0004\u0018\u00010\u0013¢\u0006\n\n\u0002\u0010*\u001a\u0004\b(\u0010)R\u0015\u0010\u0014\u001a\u0004\u0018\u00010\f¢\u0006\n\n\u0002\u0010-\u001a\u0004\b+\u0010,R\u0011\u0010.\u001a\u00020\f¢\u0006\b\n\u0000\u001a\u0004\b.\u0010\"R\u0011\u0010/\u001a\u00020\f¢\u0006\b\n\u0000\u001a\u0004\b/\u0010\"R\u0011\u00100\u001a\u00020\f¢\u0006\b\n\u0000\u001a\u0004\b0\u0010\"¨\u0006F"}, d2 = {"Lcom/discord/media_player/MediaSource;", "", "sourceUrl", "", "previewUrl", "placeholder", "placeholderVersion", "", "featureTag", "type", "Lcom/discord/media_player/MediaType;", "shouldAutoPlay", "", "channelId", "Lcom/discord/primitives/ChannelId;", "messageId", "Lcom/discord/primitives/MessageId;", "index", "portal", "", "srcIsAnimated", "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;Lcom/discord/media_player/MediaType;ZLcom/discord/primitives/ChannelId;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Double;Ljava/lang/Boolean;Lkotlin/jvm/internal/DefaultConstructorMarker;)V", "getSourceUrl", "()Ljava/lang/String;", "getPreviewUrl", "getPlaceholder", "getPlaceholderVersion", "()Ljava/lang/Integer;", "Ljava/lang/Integer;", "getFeatureTag", "getType", "()Lcom/discord/media_player/MediaType;", "getShouldAutoPlay", "()Z", "getChannelId-qMVnFVQ", "()Lcom/discord/primitives/ChannelId;", "getMessageId-N_6c4I0", "Ljava/lang/String;", "getIndex", "getPortal", "()Ljava/lang/Double;", "Ljava/lang/Double;", "getSrcIsAnimated", "()Ljava/lang/Boolean;", "Ljava/lang/Boolean;", "isGifv", "isVideo", "isValid", "component1", "component2", "component3", "component4", "component5", "component6", "component7", "component8", "component8-qMVnFVQ", "component9", "component9-N_6c4I0", "component10", "component11", "component12", "copy", "copy-M_16ML8", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;Lcom/discord/media_player/MediaType;ZLcom/discord/primitives/ChannelId;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Double;Ljava/lang/Boolean;)Lcom/discord/media_player/MediaSource;", "equals", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "media_player_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class MediaSource {
    private final ChannelId channelId;

    @NotNull
    private final String featureTag;
    private final Integer index;
    private final boolean isGifv;
    private final boolean isValid;
    private final boolean isVideo;
    private final String messageId;
    private final String placeholder;
    private final Integer placeholderVersion;
    private final Double portal;
    private final String previewUrl;
    private final boolean shouldAutoPlay;
    private final String sourceUrl;
    private final Boolean srcIsAnimated;

    @NotNull
    private final MediaType type;

    @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
    public /* synthetic */ class WhenMappings {
        public static final /* synthetic */ int[] $EnumSwitchMapping$0;

        static {
            int[] iArr = new int[MediaType.values().length];
            try {
                iArr[MediaType.IMAGE.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                iArr[MediaType.VIDEO.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                iArr[MediaType.GIFV.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                iArr[MediaType.AUDIO.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            $EnumSwitchMapping$0 = iArr;
        }
    }

    public /* synthetic */ MediaSource(String str, String str2, String str3, Integer num, String str4, MediaType mediaType, boolean z5, ChannelId channelId, String str5, Integer num2, Double d6, Boolean bool, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, str2, str3, num, str4, mediaType, z5, channelId, str5, num2, d6, bool);
    }

    /* renamed from: copy-M_16ML8$default, reason: not valid java name */
    public static /* synthetic */ MediaSource m1047copyM_16ML8$default(MediaSource mediaSource, String str, String str2, String str3, Integer num, String str4, MediaType mediaType, boolean z5, ChannelId channelId, String str5, Integer num2, Double d6, Boolean bool, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            str = mediaSource.sourceUrl;
        }
        if ((i5 & 2) != 0) {
            str2 = mediaSource.previewUrl;
        }
        if ((i5 & 4) != 0) {
            str3 = mediaSource.placeholder;
        }
        if ((i5 & 8) != 0) {
            num = mediaSource.placeholderVersion;
        }
        if ((i5 & 16) != 0) {
            str4 = mediaSource.featureTag;
        }
        if ((i5 & 32) != 0) {
            mediaType = mediaSource.type;
        }
        if ((i5 & 64) != 0) {
            z5 = mediaSource.shouldAutoPlay;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0) {
            channelId = mediaSource.channelId;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0) {
            str5 = mediaSource.messageId;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0) {
            num2 = mediaSource.index;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0) {
            d6 = mediaSource.portal;
        }
        if ((i5 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0) {
            bool = mediaSource.srcIsAnimated;
        }
        Double d7 = d6;
        Boolean bool2 = bool;
        String str6 = str5;
        Integer num3 = num2;
        boolean z6 = z5;
        ChannelId channelId2 = channelId;
        String str7 = str4;
        MediaType mediaType2 = mediaType;
        return mediaSource.m1050copyM_16ML8(str, str2, str3, num, str7, mediaType2, z6, channelId2, str6, num3, d7, bool2);
    }

    /* renamed from: component1, reason: from getter */
    public final String getSourceUrl() {
        return this.sourceUrl;
    }

    /* renamed from: component10, reason: from getter */
    public final Integer getIndex() {
        return this.index;
    }

    /* renamed from: component11, reason: from getter */
    public final Double getPortal() {
        return this.portal;
    }

    /* renamed from: component12, reason: from getter */
    public final Boolean getSrcIsAnimated() {
        return this.srcIsAnimated;
    }

    /* renamed from: component2, reason: from getter */
    public final String getPreviewUrl() {
        return this.previewUrl;
    }

    /* renamed from: component3, reason: from getter */
    public final String getPlaceholder() {
        return this.placeholder;
    }

    /* renamed from: component4, reason: from getter */
    public final Integer getPlaceholderVersion() {
        return this.placeholderVersion;
    }

    @NotNull
    /* renamed from: component5, reason: from getter */
    public final String getFeatureTag() {
        return this.featureTag;
    }

    @NotNull
    /* renamed from: component6, reason: from getter */
    public final MediaType getType() {
        return this.type;
    }

    /* renamed from: component7, reason: from getter */
    public final boolean getShouldAutoPlay() {
        return this.shouldAutoPlay;
    }

    /* renamed from: component8-qMVnFVQ, reason: not valid java name and from getter */
    public final ChannelId getChannelId() {
        return this.channelId;
    }

    /* renamed from: component9-N_6c4I0, reason: not valid java name and from getter */
    public final String getMessageId() {
        return this.messageId;
    }

    @NotNull
    /* renamed from: copy-M_16ML8, reason: not valid java name */
    public final MediaSource m1050copyM_16ML8(String sourceUrl, String previewUrl, String placeholder, Integer placeholderVersion, @NotNull String featureTag, @NotNull MediaType type, boolean shouldAutoPlay, ChannelId channelId, String messageId, Integer index, Double portal, Boolean srcIsAnimated) {
        Intrinsics.checkNotNullParameter(featureTag, "featureTag");
        Intrinsics.checkNotNullParameter(type, "type");
        return new MediaSource(sourceUrl, previewUrl, placeholder, placeholderVersion, featureTag, type, shouldAutoPlay, channelId, messageId, index, portal, srcIsAnimated, null);
    }

    public boolean equals(Object other) {
        boolean m1193equalsimpl0;
        if (this == other) {
            return true;
        }
        if (!(other instanceof MediaSource)) {
            return false;
        }
        MediaSource mediaSource = (MediaSource) other;
        if (!Intrinsics.areEqual(this.sourceUrl, mediaSource.sourceUrl) || !Intrinsics.areEqual(this.previewUrl, mediaSource.previewUrl) || !Intrinsics.areEqual(this.placeholder, mediaSource.placeholder) || !Intrinsics.areEqual(this.placeholderVersion, mediaSource.placeholderVersion) || !Intrinsics.areEqual(this.featureTag, mediaSource.featureTag) || this.type != mediaSource.type || this.shouldAutoPlay != mediaSource.shouldAutoPlay || !Intrinsics.areEqual(this.channelId, mediaSource.channelId)) {
            return false;
        }
        String str = this.messageId;
        String str2 = mediaSource.messageId;
        if (str == null) {
            if (str2 == null) {
                m1193equalsimpl0 = true;
            }
            m1193equalsimpl0 = false;
        } else {
            if (str2 != null) {
                m1193equalsimpl0 = MessageId.m1193equalsimpl0(str, str2);
            }
            m1193equalsimpl0 = false;
        }
        return m1193equalsimpl0 && Intrinsics.areEqual(this.index, mediaSource.index) && Intrinsics.areEqual((Object) this.portal, (Object) mediaSource.portal) && Intrinsics.areEqual(this.srcIsAnimated, mediaSource.srcIsAnimated);
    }

    /* renamed from: getChannelId-qMVnFVQ, reason: not valid java name */
    public final ChannelId m1051getChannelIdqMVnFVQ() {
        return this.channelId;
    }

    @NotNull
    public final String getFeatureTag() {
        return this.featureTag;
    }

    public final Integer getIndex() {
        return this.index;
    }

    /* renamed from: getMessageId-N_6c4I0, reason: not valid java name */
    public final String m1052getMessageIdN_6c4I0() {
        return this.messageId;
    }

    public final String getPlaceholder() {
        return this.placeholder;
    }

    public final Integer getPlaceholderVersion() {
        return this.placeholderVersion;
    }

    public final Double getPortal() {
        return this.portal;
    }

    public final String getPreviewUrl() {
        return this.previewUrl;
    }

    public final boolean getShouldAutoPlay() {
        return this.shouldAutoPlay;
    }

    public final String getSourceUrl() {
        return this.sourceUrl;
    }

    public final Boolean getSrcIsAnimated() {
        return this.srcIsAnimated;
    }

    @NotNull
    public final MediaType getType() {
        return this.type;
    }

    public int hashCode() {
        String str = this.sourceUrl;
        int hashCode = (str == null ? 0 : str.hashCode()) * 31;
        String str2 = this.previewUrl;
        int hashCode2 = (hashCode + (str2 == null ? 0 : str2.hashCode())) * 31;
        String str3 = this.placeholder;
        int hashCode3 = (hashCode2 + (str3 == null ? 0 : str3.hashCode())) * 31;
        Integer num = this.placeholderVersion;
        int d6 = k0.d.d((this.type.hashCode() + e.d((hashCode3 + (num == null ? 0 : num.hashCode())) * 31, 31, this.featureTag)) * 31, 31, this.shouldAutoPlay);
        ChannelId channelId = this.channelId;
        int m1168hashCodeimpl = (d6 + (channelId == null ? 0 : ChannelId.m1168hashCodeimpl(channelId.m1172unboximpl()))) * 31;
        String str4 = this.messageId;
        int m1194hashCodeimpl = (m1168hashCodeimpl + (str4 == null ? 0 : MessageId.m1194hashCodeimpl(str4))) * 31;
        Integer num2 = this.index;
        int hashCode4 = (m1194hashCodeimpl + (num2 == null ? 0 : num2.hashCode())) * 31;
        Double d7 = this.portal;
        int hashCode5 = (hashCode4 + (d7 == null ? 0 : d7.hashCode())) * 31;
        Boolean bool = this.srcIsAnimated;
        return hashCode5 + (bool != null ? bool.hashCode() : 0);
    }

    /* renamed from: isGifv, reason: from getter */
    public final boolean getIsGifv() {
        return this.isGifv;
    }

    /* renamed from: isValid, reason: from getter */
    public final boolean getIsValid() {
        return this.isValid;
    }

    /* renamed from: isVideo, reason: from getter */
    public final boolean getIsVideo() {
        return this.isVideo;
    }

    @NotNull
    public String toString() {
        String str = this.sourceUrl;
        String str2 = this.previewUrl;
        String str3 = this.placeholder;
        Integer num = this.placeholderVersion;
        String str4 = this.featureTag;
        MediaType mediaType = this.type;
        boolean z5 = this.shouldAutoPlay;
        ChannelId channelId = this.channelId;
        String str5 = this.messageId;
        String m1196toStringimpl = str5 == null ? "null" : MessageId.m1196toStringimpl(str5);
        Integer num2 = this.index;
        Double d6 = this.portal;
        Boolean bool = this.srcIsAnimated;
        StringBuilder t5 = e.t("MediaSource(sourceUrl=", str, ", previewUrl=", str2, ", placeholder=");
        com.discord.chat.bridge.botuikit.a.r(num, str3, ", placeholderVersion=", ", featureTag=", t5);
        t5.append(str4);
        t5.append(", type=");
        t5.append(mediaType);
        t5.append(", shouldAutoPlay=");
        t5.append(z5);
        t5.append(", channelId=");
        t5.append(channelId);
        t5.append(", messageId=");
        com.discord.chat.bridge.botuikit.a.r(num2, m1196toStringimpl, ", index=", ", portal=", t5);
        t5.append(d6);
        t5.append(", srcIsAnimated=");
        t5.append(bool);
        t5.append(")");
        return t5.toString();
    }

    /* JADX WARN: Code restructure failed: missing block: B:20:0x005a, code lost:
    
        if (kotlin.text.StringsKt.K(r2) == false) goto L25;
     */
    /* JADX WARN: Code restructure failed: missing block: B:21:0x005d, code lost:
    
        r5 = true;
     */
    /* JADX WARN: Code restructure failed: missing block: B:26:0x0065, code lost:
    
        if (kotlin.text.StringsKt.K(r3) == false) goto L25;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private MediaSource(String str, String str2, String str3, Integer num, String featureTag, MediaType type, boolean z5, ChannelId channelId, String str4, Integer num2, Double d6, Boolean bool) {
        Intrinsics.checkNotNullParameter(featureTag, "featureTag");
        Intrinsics.checkNotNullParameter(type, "type");
        this.sourceUrl = str;
        this.previewUrl = str2;
        this.placeholder = str3;
        this.placeholderVersion = num;
        this.featureTag = featureTag;
        this.type = type;
        this.shouldAutoPlay = z5;
        this.channelId = channelId;
        this.messageId = str4;
        this.index = num2;
        this.portal = d6;
        this.srcIsAnimated = bool;
        boolean z6 = false;
        this.isGifv = type == MediaType.GIFV;
        this.isVideo = type == MediaType.VIDEO;
        int i5 = WhenMappings.$EnumSwitchMapping$0[type.ordinal()];
        if (i5 == 1) {
            if (str2 != null) {
            }
            this.isValid = z6;
        } else {
            if (i5 != 2 && i5 != 3 && i5 != 4) {
                throw new n();
            }
            if (str != null) {
            }
            this.isValid = z6;
        }
    }

    public /* synthetic */ MediaSource(String str, String str2, String str3, Integer num, String str4, MediaType mediaType, boolean z5, ChannelId channelId, String str5, Integer num2, Double d6, Boolean bool, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this((i5 & 1) != 0 ? null : str, (i5 & 2) != 0 ? null : str2, (i5 & 4) != 0 ? null : str3, (i5 & 8) != 0 ? null : num, str4, mediaType, (i5 & 64) != 0 ? false : z5, channelId, (i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? null : str5, (i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0 ? null : num2, (i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0 ? null : d6, (i5 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0 ? null : bool, null);
    }
}
