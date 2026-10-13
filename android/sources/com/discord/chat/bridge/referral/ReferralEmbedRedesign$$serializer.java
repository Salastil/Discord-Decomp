package com.discord.chat.bridge.referral;

import androidx.recyclerview.widget.RecyclerView;
import bs.g;
import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import bs.v1;
import com.discord.chat.bridge.structurabletext.AnnotatedStructurableText;
import com.discord.chat.bridge.structurabletext.AnnotatedStructurableTextSerializer;
import com.discord.key_commands.KeyCommandDescriptor;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.uimanager.ViewProps;
import ds.r;
import fo.d;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeDecoder;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;
import kotlinx.serialization.internal.SerializationConstructorMarker;
import nf.e;
import org.jetbrains.annotations.NotNull;
import org.webrtc.PeerConnection;

@d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/referral/ReferralEmbedRedesign.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/referral/ReferralEmbedRedesign;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/referral/ReferralEmbedRedesign;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/referral/ReferralEmbedRedesign;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class ReferralEmbedRedesign$$serializer implements h0 {

    @NotNull
    public static final ReferralEmbedRedesign$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        ReferralEmbedRedesign$$serializer referralEmbedRedesign$$serializer = new ReferralEmbedRedesign$$serializer();
        INSTANCE = referralEmbedRedesign$$serializer;
        j1 j1Var = new j1("com.discord.chat.bridge.referral.ReferralEmbedRedesign", referralEmbedRedesign$$serializer, 19);
        j1Var.k("titleText", true);
        j1Var.k("titleColor", true);
        j1Var.k("headerImageUrl", true);
        j1Var.k("headerText", true);
        j1Var.k("headerColor", true);
        j1Var.k(ViewProps.BACKGROUND_COLOR, true);
        j1Var.k(ViewProps.BORDER_COLOR, true);
        j1Var.k("bodyText", true);
        j1Var.k("structuredBodyText", true);
        j1Var.k("bodyTextColor", true);
        j1Var.k("subText", true);
        j1Var.k("subTextColor", true);
        j1Var.k("footerText", true);
        j1Var.k("footerTextColor", true);
        j1Var.k("acceptLabelText", true);
        j1Var.k("acceptLabelColor", true);
        j1Var.k("acceptLabelIconUrl", true);
        j1Var.k("canBeAccepted", true);
        j1Var.k("learnMoreLink", true);
        descriptor = j1Var;
    }

    private ReferralEmbedRedesign$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        v1 v1Var = v1.a;
        o0 o0Var = o0.a;
        KSerializer o6 = e.o(o0Var);
        KSerializer o7 = e.o(o0Var);
        KSerializer o10 = e.o(o0Var);
        KSerializer o11 = e.o(o0Var);
        KSerializer o12 = e.o(v1Var);
        AnnotatedStructurableTextSerializer annotatedStructurableTextSerializer = AnnotatedStructurableTextSerializer.INSTANCE;
        return new KSerializer[]{v1Var, o6, v1Var, v1Var, o7, o10, o11, o12, e.o(annotatedStructurableTextSerializer), e.o(o0Var), e.o(v1Var), e.o(o0Var), e.o(v1Var), e.o(o0Var), e.o(v1Var), e.o(o0Var), e.o(v1Var), e.o(g.a), e.o(annotatedStructurableTextSerializer)};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final ReferralEmbedRedesign deserialize(@NotNull Decoder decoder) {
        String str;
        Integer num;
        int i5;
        AnnotatedStructurableText annotatedStructurableText;
        String str2;
        Integer num2;
        String str3;
        Integer num3;
        Integer num4;
        String str4;
        Integer num5;
        String str5;
        Integer num6;
        Integer num7;
        Integer num8;
        AnnotatedStructurableText annotatedStructurableText2;
        Boolean bool;
        String str6;
        String str7;
        String str8;
        String str9;
        int i6;
        Boolean bool2;
        AnnotatedStructurableText annotatedStructurableText3;
        Integer num9;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        String str10 = null;
        if (beginStructure.decodeSequentially()) {
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 0);
            o0 o0Var = o0.a;
            Integer num10 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 1, o0Var, null);
            String decodeStringElement2 = beginStructure.decodeStringElement(serialDescriptor, 2);
            String decodeStringElement3 = beginStructure.decodeStringElement(serialDescriptor, 3);
            Integer num11 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, o0Var, null);
            Integer num12 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, o0Var, null);
            Integer num13 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 6, o0Var, null);
            v1 v1Var = v1.a;
            String str11 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 7, v1Var, null);
            AnnotatedStructurableTextSerializer annotatedStructurableTextSerializer = AnnotatedStructurableTextSerializer.INSTANCE;
            AnnotatedStructurableText annotatedStructurableText4 = (AnnotatedStructurableText) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, annotatedStructurableTextSerializer, null);
            Integer num14 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 9, o0Var, null);
            String str12 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 10, v1Var, null);
            Integer num15 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 11, o0Var, null);
            String str13 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 12, v1Var, null);
            Integer num16 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 13, o0Var, null);
            String str14 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 14, v1Var, null);
            Integer num17 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 15, o0Var, null);
            String str15 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 16, v1Var, null);
            bool = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 17, g.a, null);
            num6 = num11;
            annotatedStructurableText2 = annotatedStructurableText4;
            str7 = decodeStringElement2;
            num = num10;
            str3 = str15;
            annotatedStructurableText = (AnnotatedStructurableText) beginStructure.decodeNullableSerializableElement(serialDescriptor, 18, annotatedStructurableTextSerializer, null);
            i5 = 524287;
            num5 = num14;
            str5 = str11;
            num8 = num13;
            num7 = num12;
            str8 = decodeStringElement3;
            num2 = num17;
            str2 = str14;
            num3 = num16;
            str = str13;
            num4 = num15;
            str4 = str12;
            str6 = decodeStringElement;
        } else {
            boolean z5 = true;
            int i10 = 0;
            Boolean bool3 = null;
            AnnotatedStructurableText annotatedStructurableText5 = null;
            String str16 = null;
            Integer num18 = null;
            AnnotatedStructurableText annotatedStructurableText6 = null;
            Integer num19 = null;
            String str17 = null;
            Integer num20 = null;
            Integer num21 = null;
            String str18 = null;
            Integer num22 = null;
            String str19 = null;
            String str20 = null;
            String str21 = null;
            String str22 = null;
            Integer num23 = null;
            Integer num24 = null;
            Integer num25 = null;
            while (z5) {
                Integer num26 = num18;
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        bool2 = bool3;
                        annotatedStructurableText3 = annotatedStructurableText5;
                        num9 = num26;
                        z5 = false;
                        num18 = num9;
                        annotatedStructurableText5 = annotatedStructurableText3;
                        bool3 = bool2;
                    case 0:
                        bool2 = bool3;
                        annotatedStructurableText3 = annotatedStructurableText5;
                        num9 = num26;
                        str20 = beginStructure.decodeStringElement(serialDescriptor, 0);
                        i10 |= 1;
                        num18 = num9;
                        annotatedStructurableText5 = annotatedStructurableText3;
                        bool3 = bool2;
                    case 1:
                        bool2 = bool3;
                        annotatedStructurableText3 = annotatedStructurableText5;
                        num9 = num26;
                        num23 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 1, o0.a, num23);
                        i10 |= 2;
                        num24 = num24;
                        num18 = num9;
                        annotatedStructurableText5 = annotatedStructurableText3;
                        bool3 = bool2;
                    case 2:
                        bool2 = bool3;
                        annotatedStructurableText3 = annotatedStructurableText5;
                        num9 = num26;
                        str21 = beginStructure.decodeStringElement(serialDescriptor, 2);
                        i10 |= 4;
                        num18 = num9;
                        annotatedStructurableText5 = annotatedStructurableText3;
                        bool3 = bool2;
                    case 3:
                        bool2 = bool3;
                        annotatedStructurableText3 = annotatedStructurableText5;
                        num9 = num26;
                        str22 = beginStructure.decodeStringElement(serialDescriptor, 3);
                        i10 |= 8;
                        num18 = num9;
                        annotatedStructurableText5 = annotatedStructurableText3;
                        bool3 = bool2;
                    case 4:
                        bool2 = bool3;
                        annotatedStructurableText3 = annotatedStructurableText5;
                        num9 = num26;
                        num24 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, o0.a, num24);
                        i10 |= 16;
                        num25 = num25;
                        num18 = num9;
                        annotatedStructurableText5 = annotatedStructurableText3;
                        bool3 = bool2;
                    case 5:
                        bool2 = bool3;
                        annotatedStructurableText3 = annotatedStructurableText5;
                        num9 = num26;
                        num25 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, o0.a, num25);
                        i10 |= 32;
                        num18 = num9;
                        annotatedStructurableText5 = annotatedStructurableText3;
                        bool3 = bool2;
                    case 6:
                        bool2 = bool3;
                        annotatedStructurableText3 = annotatedStructurableText5;
                        num18 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 6, o0.a, num26);
                        i10 |= 64;
                        annotatedStructurableText5 = annotatedStructurableText3;
                        bool3 = bool2;
                    case 7:
                        str19 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 7, v1.a, str19);
                        i10 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                        bool3 = bool3;
                        num18 = num26;
                    case 8:
                        str9 = str19;
                        annotatedStructurableText5 = (AnnotatedStructurableText) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, AnnotatedStructurableTextSerializer.INSTANCE, annotatedStructurableText5);
                        i10 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                        num18 = num26;
                        str19 = str9;
                    case 9:
                        str9 = str19;
                        num22 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 9, o0.a, num22);
                        i10 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                        num18 = num26;
                        str19 = str9;
                    case 10:
                        str9 = str19;
                        str18 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 10, v1.a, str18);
                        i10 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET;
                        num18 = num26;
                        str19 = str9;
                    case 11:
                        str9 = str19;
                        num21 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 11, o0.a, num21);
                        i10 |= RecyclerView.ItemAnimator.FLAG_MOVED;
                        num18 = num26;
                        str19 = str9;
                    case 12:
                        str9 = str19;
                        str16 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 12, v1.a, str16);
                        i10 |= RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
                        num18 = num26;
                        str19 = str9;
                    case 13:
                        str9 = str19;
                        num20 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 13, o0.a, num20);
                        i10 |= 8192;
                        num18 = num26;
                        str19 = str9;
                    case 14:
                        str9 = str19;
                        str10 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 14, v1.a, str10);
                        i10 |= 16384;
                        num18 = num26;
                        str19 = str9;
                    case 15:
                        str9 = str19;
                        num19 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 15, o0.a, num19);
                        i6 = PeerConnection.PORTALLOCATOR_ENABLE_ANY_ADDRESS_PORTS;
                        i10 |= i6;
                        num18 = num26;
                        str19 = str9;
                    case 16:
                        str9 = str19;
                        str17 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 16, v1.a, str17);
                        i6 = KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT;
                        i10 |= i6;
                        num18 = num26;
                        str19 = str9;
                    case 17:
                        str9 = str19;
                        bool3 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 17, g.a, bool3);
                        i6 = KeyCommandDescriptor.ModifierFlags.SHIFT;
                        i10 |= i6;
                        num18 = num26;
                        str19 = str9;
                    case 18:
                        str9 = str19;
                        annotatedStructurableText6 = (AnnotatedStructurableText) beginStructure.decodeNullableSerializableElement(serialDescriptor, 18, AnnotatedStructurableTextSerializer.INSTANCE, annotatedStructurableText6);
                        i6 = KeyCommandDescriptor.ModifierFlags.CONTROL;
                        i10 |= i6;
                        num18 = num26;
                        str19 = str9;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            str = str16;
            num = num23;
            i5 = i10;
            annotatedStructurableText = annotatedStructurableText6;
            str2 = str10;
            num2 = num19;
            str3 = str17;
            num3 = num20;
            num4 = num21;
            str4 = str18;
            num5 = num22;
            str5 = str19;
            num6 = num24;
            num7 = num25;
            num8 = num18;
            annotatedStructurableText2 = annotatedStructurableText5;
            bool = bool3;
            str6 = str20;
            str7 = str21;
            str8 = str22;
        }
        beginStructure.endStructure(serialDescriptor);
        return new ReferralEmbedRedesign(i5, str6, num, str7, str8, num6, num7, num8, str5, annotatedStructurableText2, num5, str4, num4, str, num3, str2, num2, str3, bool, annotatedStructurableText, (SerializationConstructorMarker) null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull ReferralEmbedRedesign value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        ReferralEmbedRedesign.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
