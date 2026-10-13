package com.discord.chat.bridge.polls;

import bs.o0;
import com.discord.chat.bridge.polls.PollRadioStyle;
import com.discord.jank_stats.JankRecordStore;
import com.discord.misc.utilities.size.SizeUtilsKt;
import com.discord.react.utilities.ReactColorToAndroidColorKt;
import com.discord.theme.ThemeManagerKt;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.uimanager.ViewProps;
import fo.l;
import k0.d;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.internal.SerializationConstructorMarker;
import o5.a;
import org.jetbrains.annotations.NotNull;
import xr.e;

@e
@Metadata(d1 = {"\u0000T\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0004\n\u0002\u0010\u0007\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b%\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 G2\u00020\u0001:\u0002GHB{\u0012\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0003\u0012\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0003\u0012\b\b\u0002\u0010\u0007\u001a\u00020\b\u0012\n\b\u0002\u0010\t\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\n\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u000b\u001a\u0004\u0018\u00010\f\u0012\n\b\u0002\u0010\r\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u000e\u001a\u0004\u0018\u00010\u0003¢\u0006\u0004\b\u000f\u0010\u0010B{\b\u0010\u0012\u0006\u0010\u0011\u001a\u00020\u0003\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\b\u0010\u0005\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0006\u001a\u0004\u0018\u00010\u0003\u0012\u0006\u0010\u0007\u001a\u00020\b\u0012\b\u0010\t\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\n\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u000b\u001a\u0004\u0018\u00010\f\u0012\b\u0010\r\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u000e\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0012\u001a\u0004\u0018\u00010\u0013¢\u0006\u0004\b\u000f\u0010\u0014J\u0010\u0010+\u001a\u0004\u0018\u00010\u0003HÂ\u0003¢\u0006\u0002\u0010,J\t\u0010-\u001a\u00020\u0003HÂ\u0003J\u0010\u0010.\u001a\u0004\u0018\u00010\u0003HÂ\u0003¢\u0006\u0002\u0010,J\u0010\u0010/\u001a\u0004\u0018\u00010\u0003HÂ\u0003¢\u0006\u0002\u0010,J\t\u00100\u001a\u00020\bHÆ\u0003J\u0010\u00101\u001a\u0004\u0018\u00010\u0003HÂ\u0003¢\u0006\u0002\u0010,J\u0010\u00102\u001a\u0004\u0018\u00010\u0003HÂ\u0003¢\u0006\u0002\u0010,J\u000b\u00103\u001a\u0004\u0018\u00010\fHÆ\u0003J\u0010\u00104\u001a\u0004\u0018\u00010\u0003HÂ\u0003¢\u0006\u0002\u0010,J\u0010\u00105\u001a\u0004\u0018\u00010\u0003HÂ\u0003¢\u0006\u0002\u0010,J\u0082\u0001\u00106\u001a\u00020\u00002\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u00032\b\b\u0002\u0010\u0007\u001a\u00020\b2\n\b\u0002\u0010\t\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\n\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u000b\u001a\u0004\u0018\u00010\f2\n\b\u0002\u0010\r\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u000e\u001a\u0004\u0018\u00010\u0003HÆ\u0001¢\u0006\u0002\u00107J\u0013\u00108\u001a\u0002092\b\u0010:\u001a\u0004\u0018\u00010;HÖ\u0003J\t\u0010<\u001a\u00020\u0003HÖ\u0001J\t\u0010=\u001a\u00020>HÖ\u0001J%\u0010?\u001a\u00020@2\u0006\u0010A\u001a\u00020\u00002\u0006\u0010B\u001a\u00020C2\u0006\u0010D\u001a\u00020EH\u0001¢\u0006\u0002\bFR\u0012\u0010\u0002\u001a\u0004\u0018\u00010\u0003X\u0082\u0004¢\u0006\u0004\n\u0002\u0010\u0015R\u000e\u0010\u0004\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u0012\u0010\u0005\u001a\u0004\u0018\u00010\u0003X\u0082\u0004¢\u0006\u0004\n\u0002\u0010\u0015R\u0012\u0010\u0006\u001a\u0004\u0018\u00010\u0003X\u0082\u0004¢\u0006\u0004\n\u0002\u0010\u0015R\u0011\u0010\u0007\u001a\u00020\b¢\u0006\b\n\u0000\u001a\u0004\b\u0016\u0010\u0017R\u0012\u0010\t\u001a\u0004\u0018\u00010\u0003X\u0082\u0004¢\u0006\u0004\n\u0002\u0010\u0015R\u0012\u0010\n\u001a\u0004\u0018\u00010\u0003X\u0082\u0004¢\u0006\u0004\n\u0002\u0010\u0015R\u0013\u0010\u000b\u001a\u0004\u0018\u00010\f¢\u0006\b\n\u0000\u001a\u0004\b\u0018\u0010\u0019R\u0012\u0010\r\u001a\u0004\u0018\u00010\u0003X\u0082\u0004¢\u0006\u0004\n\u0002\u0010\u0015R\u0012\u0010\u000e\u001a\u0004\u0018\u00010\u0003X\u0082\u0004¢\u0006\u0004\n\u0002\u0010\u0015R\u0014\u0010\u001a\u001a\u00020\u00038WX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\u001b\u0010\u001cR\u0014\u0010\u001d\u001a\u00020\u00038VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\u001e\u0010\u001cR\u0014\u0010\u001f\u001a\u00020\u00038WX\u0096\u0004¢\u0006\u0006\u001a\u0004\b \u0010\u001cR\u0014\u0010!\u001a\u00020\u00038WX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\"\u0010\u001cR\u0014\u0010#\u001a\u00020\u00038WX\u0096\u0004¢\u0006\u0006\u001a\u0004\b$\u0010\u001cR\u0014\u0010%\u001a\u00020\u00038WX\u0096\u0004¢\u0006\u0006\u001a\u0004\b&\u0010\u001cR\u0014\u0010'\u001a\u00020\u00038WX\u0096\u0004¢\u0006\u0006\u001a\u0004\b(\u0010\u001cR\u0014\u0010)\u001a\u00020\u00038WX\u0096\u0004¢\u0006\u0006\u001a\u0004\b*\u0010\u001c¨\u0006I"}, d2 = {"Lcom/discord/chat/bridge/polls/PollStyleSet;", "Lcom/discord/chat/bridge/polls/IPollStyleSet;", "border", "", ViewProps.BORDER_WIDTH, "fill", "label", ViewProps.OPACITY, "", "answerBackground", "answerFill", "radioStyle", "Lcom/discord/chat/bridge/polls/PollRadioStyle;", "radioBackground", "radioForeground", "<init>", "(Ljava/lang/Integer;ILjava/lang/Integer;Ljava/lang/Integer;FLjava/lang/Integer;Ljava/lang/Integer;Lcom/discord/chat/bridge/polls/PollRadioStyle;Ljava/lang/Integer;Ljava/lang/Integer;)V", "seen0", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILjava/lang/Integer;ILjava/lang/Integer;Ljava/lang/Integer;FLjava/lang/Integer;Ljava/lang/Integer;Lcom/discord/chat/bridge/polls/PollRadioStyle;Ljava/lang/Integer;Ljava/lang/Integer;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "Ljava/lang/Integer;", "getOpacity", "()F", "getRadioStyle", "()Lcom/discord/chat/bridge/polls/PollRadioStyle;", ViewProps.BORDER_COLOR, "getBorderColor", "()I", "borderWidthPx", "getBorderWidthPx", "fillColor", "getFillColor", "labelColor", "getLabelColor", "answerBackgroundColor", "getAnswerBackgroundColor", "answerFillColor", "getAnswerFillColor", "radioBackgroundColor", "getRadioBackgroundColor", "radioForegroundColor", "getRadioForegroundColor", "component1", "()Ljava/lang/Integer;", "component2", "component3", "component4", "component5", "component6", "component7", "component8", "component9", "component10", "copy", "(Ljava/lang/Integer;ILjava/lang/Integer;Ljava/lang/Integer;FLjava/lang/Integer;Ljava/lang/Integer;Lcom/discord/chat/bridge/polls/PollRadioStyle;Ljava/lang/Integer;Ljava/lang/Integer;)Lcom/discord/chat/bridge/polls/PollStyleSet;", "equals", "", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "Companion", "$serializer", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nPollStyleSet.kt\nKotlin\n*S Kotlin\n*F\n+ 1 PollStyleSet.kt\ncom/discord/chat/bridge/polls/PollStyleSet\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,58:1\n1#2:59\n*E\n"})
/* loaded from: classes.dex */
public final /* data */ class PollStyleSet implements IPollStyleSet {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    private static final Lazy DEFAULT$delegate = l.a(new a(21));

    @NotNull
    public static final String DEFAULT_KEY = "normal";
    private final Integer answerBackground;
    private final Integer answerFill;
    private final Integer border;
    private final int borderWidth;
    private final Integer fill;
    private final Integer label;
    private final float opacity;
    private final Integer radioBackground;
    private final Integer radioForeground;
    private final PollRadioStyle radioStyle;

    @Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\f\u001a\b\u0012\u0004\u0012\u00020\u00070\rR\u000e\u0010\u0004\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u001b\u0010\u0006\u001a\u00020\u00078FX\u0086\u0084\u0002¢\u0006\f\n\u0004\b\n\u0010\u000b\u001a\u0004\b\b\u0010\t¨\u0006\u000e"}, d2 = {"Lcom/discord/chat/bridge/polls/PollStyleSet$Companion;", "", "<init>", "()V", "DEFAULT_KEY", "", "DEFAULT", "Lcom/discord/chat/bridge/polls/PollStyleSet;", "getDEFAULT", "()Lcom/discord/chat/bridge/polls/PollStyleSet;", "DEFAULT$delegate", "Lkotlin/Lazy;", "serializer", "Lkotlinx/serialization/KSerializer;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        @NotNull
        public final PollStyleSet getDEFAULT() {
            return (PollStyleSet) PollStyleSet.DEFAULT$delegate.getValue();
        }

        @NotNull
        public final KSerializer serializer() {
            return PollStyleSet$$serializer.INSTANCE;
        }

        private Companion() {
        }
    }

    public PollStyleSet() {
        this((Integer) null, 0, (Integer) null, (Integer) null, 0.0f, (Integer) null, (Integer) null, (PollRadioStyle) null, (Integer) null, (Integer) null, 1023, (DefaultConstructorMarker) null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final PollStyleSet DEFAULT_delegate$lambda$6() {
        return new PollStyleSet((Integer) null, 0, (Integer) null, (Integer) null, 0.0f, (Integer) null, (Integer) null, (PollRadioStyle) null, (Integer) null, (Integer) null, 1023, (DefaultConstructorMarker) null);
    }

    /* renamed from: component1, reason: from getter */
    private final Integer getBorder() {
        return this.border;
    }

    /* renamed from: component10, reason: from getter */
    private final Integer getRadioForeground() {
        return this.radioForeground;
    }

    /* renamed from: component2, reason: from getter */
    private final int getBorderWidth() {
        return this.borderWidth;
    }

    /* renamed from: component3, reason: from getter */
    private final Integer getFill() {
        return this.fill;
    }

    /* renamed from: component4, reason: from getter */
    private final Integer getLabel() {
        return this.label;
    }

    /* renamed from: component6, reason: from getter */
    private final Integer getAnswerBackground() {
        return this.answerBackground;
    }

    /* renamed from: component7, reason: from getter */
    private final Integer getAnswerFill() {
        return this.answerFill;
    }

    /* renamed from: component9, reason: from getter */
    private final Integer getRadioBackground() {
        return this.radioBackground;
    }

    public static /* synthetic */ PollStyleSet copy$default(PollStyleSet pollStyleSet, Integer num, int i5, Integer num2, Integer num3, float f2, Integer num4, Integer num5, PollRadioStyle pollRadioStyle, Integer num6, Integer num7, int i6, Object obj) {
        if ((i6 & 1) != 0) {
            num = pollStyleSet.border;
        }
        if ((i6 & 2) != 0) {
            i5 = pollStyleSet.borderWidth;
        }
        if ((i6 & 4) != 0) {
            num2 = pollStyleSet.fill;
        }
        if ((i6 & 8) != 0) {
            num3 = pollStyleSet.label;
        }
        if ((i6 & 16) != 0) {
            f2 = pollStyleSet.opacity;
        }
        if ((i6 & 32) != 0) {
            num4 = pollStyleSet.answerBackground;
        }
        if ((i6 & 64) != 0) {
            num5 = pollStyleSet.answerFill;
        }
        if ((i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0) {
            pollRadioStyle = pollStyleSet.radioStyle;
        }
        if ((i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0) {
            num6 = pollStyleSet.radioBackground;
        }
        if ((i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0) {
            num7 = pollStyleSet.radioForeground;
        }
        Integer num8 = num6;
        Integer num9 = num7;
        Integer num10 = num5;
        PollRadioStyle pollRadioStyle2 = pollRadioStyle;
        float f10 = f2;
        Integer num11 = num4;
        return pollStyleSet.copy(num, i5, num2, num3, f10, num11, num10, pollRadioStyle2, num8, num9);
    }

    public static final /* synthetic */ void write$Self$chat_release(PollStyleSet self, CompositeEncoder output, SerialDescriptor serialDesc) {
        if (output.I(serialDesc, 0) || self.border != null) {
            output.z(serialDesc, 0, o0.a, self.border);
        }
        if (output.I(serialDesc, 1) || self.borderWidth != 0) {
            output.n(1, self.borderWidth, serialDesc);
        }
        if (output.I(serialDesc, 2) || self.fill != null) {
            output.z(serialDesc, 2, o0.a, self.fill);
        }
        if (output.I(serialDesc, 3) || self.label != null) {
            output.z(serialDesc, 3, o0.a, self.label);
        }
        if (output.I(serialDesc, 4) || Float.compare(self.opacity, 1.0f) != 0) {
            output.l(serialDesc, 4, self.opacity);
        }
        if (output.I(serialDesc, 5) || self.answerBackground != null) {
            output.z(serialDesc, 5, o0.a, self.answerBackground);
        }
        if (output.I(serialDesc, 6) || self.answerFill != null) {
            output.z(serialDesc, 6, o0.a, self.answerFill);
        }
        if (output.I(serialDesc, 7) || self.radioStyle != null) {
            output.z(serialDesc, 7, PollRadioStyle.Serializer.INSTANCE, self.radioStyle);
        }
        if (output.I(serialDesc, 8) || self.radioBackground != null) {
            output.z(serialDesc, 8, o0.a, self.radioBackground);
        }
        if (!output.I(serialDesc, 9) && self.radioForeground == null) {
            return;
        }
        output.z(serialDesc, 9, o0.a, self.radioForeground);
    }

    /* renamed from: component5, reason: from getter */
    public final float getOpacity() {
        return this.opacity;
    }

    /* renamed from: component8, reason: from getter */
    public final PollRadioStyle getRadioStyle() {
        return this.radioStyle;
    }

    @NotNull
    public final PollStyleSet copy(Integer border, int borderWidth, Integer fill, Integer label, float opacity, Integer answerBackground, Integer answerFill, PollRadioStyle radioStyle, Integer radioBackground, Integer radioForeground) {
        return new PollStyleSet(border, borderWidth, fill, label, opacity, answerBackground, answerFill, radioStyle, radioBackground, radioForeground);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof PollStyleSet)) {
            return false;
        }
        PollStyleSet pollStyleSet = (PollStyleSet) other;
        return Intrinsics.areEqual(this.border, pollStyleSet.border) && this.borderWidth == pollStyleSet.borderWidth && Intrinsics.areEqual(this.fill, pollStyleSet.fill) && Intrinsics.areEqual(this.label, pollStyleSet.label) && Float.compare(this.opacity, pollStyleSet.opacity) == 0 && Intrinsics.areEqual(this.answerBackground, pollStyleSet.answerBackground) && Intrinsics.areEqual(this.answerFill, pollStyleSet.answerFill) && this.radioStyle == pollStyleSet.radioStyle && Intrinsics.areEqual(this.radioBackground, pollStyleSet.radioBackground) && Intrinsics.areEqual(this.radioForeground, pollStyleSet.radioForeground);
    }

    @Override // com.discord.chat.bridge.polls.IPollStyleSet
    public int getAnswerBackgroundColor() {
        Integer num = this.answerBackground;
        return num != null ? ReactColorToAndroidColorKt.reactColorToAndroidColor(num.intValue()) : ThemeManagerKt.getTheme().getBackgroundSurfaceHigh();
    }

    @Override // com.discord.chat.bridge.polls.IPollStyleSet
    public int getAnswerFillColor() {
        Integer num = this.answerFill;
        return num != null ? ReactColorToAndroidColorKt.reactColorToAndroidColor(num.intValue()) : ThemeManagerKt.getTheme().getBackgroundBaseLowest();
    }

    @Override // com.discord.chat.bridge.polls.IPollStyleSet
    public int getBorderColor() {
        Integer num = this.border;
        return num != null ? ReactColorToAndroidColorKt.reactColorToAndroidColor(num.intValue()) : ThemeManagerKt.getTheme().getBackgroundBaseLowest();
    }

    @Override // com.discord.chat.bridge.polls.IPollStyleSet
    public int getBorderWidthPx() {
        return SizeUtilsKt.getDpToPx(this.borderWidth);
    }

    @Override // com.discord.chat.bridge.polls.IPollStyleSet
    public int getFillColor() {
        Integer num = this.fill;
        return num != null ? ReactColorToAndroidColorKt.reactColorToAndroidColor(num.intValue()) : ThemeManagerKt.getTheme().getBackgroundSurfaceHigh();
    }

    @Override // com.discord.chat.bridge.polls.IPollStyleSet
    public int getLabelColor() {
        Integer num = this.label;
        return num != null ? ReactColorToAndroidColorKt.reactColorToAndroidColor(num.intValue()) : ThemeManagerKt.getTheme().getTextStrong();
    }

    public final float getOpacity() {
        return this.opacity;
    }

    @Override // com.discord.chat.bridge.polls.IPollStyleSet
    public int getRadioBackgroundColor() {
        Integer num = this.radioBackground;
        return num != null ? ReactColorToAndroidColorKt.reactColorToAndroidColor(num.intValue()) : ThemeManagerKt.getTheme().getInteractiveTextDefault();
    }

    @Override // com.discord.chat.bridge.polls.IPollStyleSet
    public int getRadioForegroundColor() {
        Integer num = this.radioForeground;
        return num != null ? ReactColorToAndroidColorKt.reactColorToAndroidColor(num.intValue()) : ThemeManagerKt.getTheme().getWhite();
    }

    public final PollRadioStyle getRadioStyle() {
        return this.radioStyle;
    }

    public int hashCode() {
        Integer num = this.border;
        int u5 = com.discord.chat.bridge.botuikit.a.u(this.borderWidth, (num == null ? 0 : num.hashCode()) * 31, 31);
        Integer num2 = this.fill;
        int hashCode = (u5 + (num2 == null ? 0 : num2.hashCode())) * 31;
        Integer num3 = this.label;
        int a = a3.e.a((hashCode + (num3 == null ? 0 : num3.hashCode())) * 31, 31, this.opacity);
        Integer num4 = this.answerBackground;
        int hashCode2 = (a + (num4 == null ? 0 : num4.hashCode())) * 31;
        Integer num5 = this.answerFill;
        int hashCode3 = (hashCode2 + (num5 == null ? 0 : num5.hashCode())) * 31;
        PollRadioStyle pollRadioStyle = this.radioStyle;
        int hashCode4 = (hashCode3 + (pollRadioStyle == null ? 0 : pollRadioStyle.hashCode())) * 31;
        Integer num6 = this.radioBackground;
        int hashCode5 = (hashCode4 + (num6 == null ? 0 : num6.hashCode())) * 31;
        Integer num7 = this.radioForeground;
        return hashCode5 + (num7 != null ? num7.hashCode() : 0);
    }

    @NotNull
    public String toString() {
        Integer num = this.border;
        int i5 = this.borderWidth;
        Integer num2 = this.fill;
        Integer num3 = this.label;
        float f2 = this.opacity;
        Integer num4 = this.answerBackground;
        Integer num5 = this.answerFill;
        PollRadioStyle pollRadioStyle = this.radioStyle;
        Integer num6 = this.radioBackground;
        Integer num7 = this.radioForeground;
        StringBuilder sb2 = new StringBuilder("PollStyleSet(border=");
        sb2.append(num);
        sb2.append(", borderWidth=");
        sb2.append(i5);
        sb2.append(", fill=");
        d.s(sb2, num2, ", label=", num3, ", opacity=");
        sb2.append(f2);
        sb2.append(", answerBackground=");
        sb2.append(num4);
        sb2.append(", answerFill=");
        sb2.append(num5);
        sb2.append(", radioStyle=");
        sb2.append(pollRadioStyle);
        sb2.append(", radioBackground=");
        sb2.append(num6);
        sb2.append(", radioForeground=");
        sb2.append(num7);
        sb2.append(")");
        return sb2.toString();
    }

    public /* synthetic */ PollStyleSet(int i5, Integer num, int i6, Integer num2, Integer num3, float f2, Integer num4, Integer num5, PollRadioStyle pollRadioStyle, Integer num6, Integer num7, SerializationConstructorMarker serializationConstructorMarker) {
        if ((i5 & 1) == 0) {
            this.border = null;
        } else {
            this.border = num;
        }
        if ((i5 & 2) == 0) {
            this.borderWidth = 0;
        } else {
            this.borderWidth = i6;
        }
        if ((i5 & 4) == 0) {
            this.fill = null;
        } else {
            this.fill = num2;
        }
        if ((i5 & 8) == 0) {
            this.label = null;
        } else {
            this.label = num3;
        }
        if ((i5 & 16) == 0) {
            this.opacity = 1.0f;
        } else {
            this.opacity = f2;
        }
        if ((i5 & 32) == 0) {
            this.answerBackground = null;
        } else {
            this.answerBackground = num4;
        }
        if ((i5 & 64) == 0) {
            this.answerFill = null;
        } else {
            this.answerFill = num5;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 0) {
            this.radioStyle = null;
        } else {
            this.radioStyle = pollRadioStyle;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 0) {
            this.radioBackground = null;
        } else {
            this.radioBackground = num6;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) == 0) {
            this.radioForeground = null;
        } else {
            this.radioForeground = num7;
        }
    }

    public PollStyleSet(Integer num, int i5, Integer num2, Integer num3, float f2, Integer num4, Integer num5, PollRadioStyle pollRadioStyle, Integer num6, Integer num7) {
        this.border = num;
        this.borderWidth = i5;
        this.fill = num2;
        this.label = num3;
        this.opacity = f2;
        this.answerBackground = num4;
        this.answerFill = num5;
        this.radioStyle = pollRadioStyle;
        this.radioBackground = num6;
        this.radioForeground = num7;
    }

    public /* synthetic */ PollStyleSet(Integer num, int i5, Integer num2, Integer num3, float f2, Integer num4, Integer num5, PollRadioStyle pollRadioStyle, Integer num6, Integer num7, int i6, DefaultConstructorMarker defaultConstructorMarker) {
        this((i6 & 1) != 0 ? null : num, (i6 & 2) != 0 ? 0 : i5, (i6 & 4) != 0 ? null : num2, (i6 & 8) != 0 ? null : num3, (i6 & 16) != 0 ? 1.0f : f2, (i6 & 32) != 0 ? null : num4, (i6 & 64) != 0 ? null : num5, (i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0 ? null : pollRadioStyle, (i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? null : num6, (i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0 ? null : num7);
    }
}
