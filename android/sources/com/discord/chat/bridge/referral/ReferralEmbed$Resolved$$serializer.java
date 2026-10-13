package com.discord.chat.bridge.referral;

import androidx.recyclerview.widget.RecyclerView;
import bs.g;
import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import bs.v1;
import com.discord.chat.bridge.referral.ReferralEmbed;
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
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/referral/ReferralEmbed.Resolved.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/referral/ReferralEmbed$Resolved;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/referral/ReferralEmbed$Resolved;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/referral/ReferralEmbed$Resolved;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class ReferralEmbed$Resolved$$serializer implements h0 {

    @NotNull
    public static final ReferralEmbed$Resolved$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        ReferralEmbed$Resolved$$serializer referralEmbed$Resolved$$serializer = new ReferralEmbed$Resolved$$serializer();
        INSTANCE = referralEmbed$Resolved$$serializer;
        j1 j1Var = new j1("com.discord.chat.bridge.referral.ReferralEmbed.Resolved", referralEmbed$Resolved$$serializer, 22);
        j1Var.k("headerText", false);
        j1Var.k("headerColor", false);
        j1Var.k(ViewProps.BACKGROUND_COLOR, false);
        j1Var.k("thumbnailCornerRadius", false);
        j1Var.k("headerLogoUrl", false);
        j1Var.k("headerUrl", true);
        j1Var.k("thumbnailUrl", true);
        j1Var.k("titleText", true);
        j1Var.k("titleColor", true);
        j1Var.k("bodyText", true);
        j1Var.k("structuredBodyText", true);
        j1Var.k("bodyTextColor", true);
        j1Var.k("linkButtonLabel", true);
        j1Var.k("linkButtonColor", true);
        j1Var.k("subText", true);
        j1Var.k("subTextColor", true);
        j1Var.k("footerText", true);
        j1Var.k("footerTextColor", true);
        j1Var.k("acceptLabelText", true);
        j1Var.k("acceptLabelColor", true);
        j1Var.k("acceptLabelIconUrl", true);
        j1Var.k("canBeAccepted", true);
        descriptor = j1Var;
    }

    private ReferralEmbed$Resolved$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        v1 v1Var = v1.a;
        o0 o0Var = o0.a;
        KSerializer o6 = e.o(v1Var);
        KSerializer o7 = e.o(v1Var);
        KSerializer o10 = e.o(v1Var);
        KSerializer o11 = e.o(v1Var);
        KSerializer o12 = e.o(o0Var);
        KSerializer o13 = e.o(v1Var);
        AnnotatedStructurableTextSerializer annotatedStructurableTextSerializer = AnnotatedStructurableTextSerializer.INSTANCE;
        return new KSerializer[]{v1Var, o0Var, o0Var, o0Var, o6, o7, o10, o11, o12, o13, e.o(annotatedStructurableTextSerializer), e.o(o0Var), e.o(annotatedStructurableTextSerializer), e.o(o0Var), e.o(v1Var), e.o(o0Var), e.o(v1Var), e.o(o0Var), e.o(v1Var), e.o(o0Var), e.o(v1Var), e.o(g.a)};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final ReferralEmbed.Resolved deserialize(@NotNull Decoder decoder) {
        String str;
        Integer num;
        String str2;
        Integer num2;
        String str3;
        Integer num3;
        int i5;
        Integer num4;
        String str4;
        Integer num5;
        AnnotatedStructurableText annotatedStructurableText;
        AnnotatedStructurableText annotatedStructurableText2;
        String str5;
        String str6;
        String str7;
        String str8;
        Integer num6;
        String str9;
        Boolean bool;
        String str10;
        int i6;
        int i10;
        int i11;
        AnnotatedStructurableText annotatedStructurableText3;
        int i12;
        String str11;
        Boolean bool2;
        AnnotatedStructurableText annotatedStructurableText4;
        String str12;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        int i13 = 0;
        Integer num7 = null;
        if (beginStructure.decodeSequentially()) {
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 0);
            int decodeIntElement = beginStructure.decodeIntElement(serialDescriptor, 1);
            int decodeIntElement2 = beginStructure.decodeIntElement(serialDescriptor, 2);
            int decodeIntElement3 = beginStructure.decodeIntElement(serialDescriptor, 3);
            v1 v1Var = v1.a;
            String str13 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, v1Var, null);
            String str14 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, v1Var, null);
            String str15 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 6, v1Var, null);
            String str16 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 7, v1Var, null);
            o0 o0Var = o0.a;
            Integer num8 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, o0Var, null);
            String str17 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 9, v1Var, null);
            AnnotatedStructurableTextSerializer annotatedStructurableTextSerializer = AnnotatedStructurableTextSerializer.INSTANCE;
            AnnotatedStructurableText annotatedStructurableText5 = (AnnotatedStructurableText) beginStructure.decodeNullableSerializableElement(serialDescriptor, 10, annotatedStructurableTextSerializer, null);
            Integer num9 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 11, o0Var, null);
            AnnotatedStructurableText annotatedStructurableText6 = (AnnotatedStructurableText) beginStructure.decodeNullableSerializableElement(serialDescriptor, 12, annotatedStructurableTextSerializer, null);
            Integer num10 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 13, o0Var, null);
            String str18 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 14, v1Var, null);
            Integer num11 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 15, o0Var, null);
            String str19 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 16, v1Var, null);
            Integer num12 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 17, o0Var, null);
            String str20 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 18, v1Var, null);
            Integer num13 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 19, o0Var, null);
            String str21 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 20, v1Var, null);
            num = num13;
            bool = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 21, g.a, null);
            num5 = num10;
            i6 = decodeIntElement3;
            str = str13;
            num6 = num8;
            i10 = decodeIntElement2;
            i11 = decodeIntElement;
            str2 = str21;
            i5 = 4194303;
            annotatedStructurableText2 = annotatedStructurableText5;
            str9 = str17;
            str8 = str16;
            str7 = str15;
            str3 = str20;
            num3 = num12;
            str4 = str19;
            num4 = num11;
            str10 = str18;
            annotatedStructurableText = annotatedStructurableText6;
            num2 = num9;
            str5 = decodeStringElement;
            str6 = str14;
        } else {
            boolean z5 = true;
            int i14 = 0;
            int i15 = 0;
            int i16 = 0;
            String str22 = null;
            Boolean bool3 = null;
            Integer num14 = null;
            String str23 = null;
            Integer num15 = null;
            String str24 = null;
            Integer num16 = null;
            String str25 = null;
            Integer num17 = null;
            AnnotatedStructurableText annotatedStructurableText7 = null;
            AnnotatedStructurableText annotatedStructurableText8 = null;
            String str26 = null;
            String str27 = null;
            String str28 = null;
            String str29 = null;
            String str30 = null;
            String str31 = null;
            Integer num18 = null;
            while (z5) {
                String str32 = str26;
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        str11 = str22;
                        bool2 = bool3;
                        annotatedStructurableText4 = annotatedStructurableText8;
                        str12 = str32;
                        z5 = false;
                        annotatedStructurableText8 = annotatedStructurableText4;
                        str26 = str12;
                        bool3 = bool2;
                        str22 = str11;
                    case 0:
                        str11 = str22;
                        bool2 = bool3;
                        annotatedStructurableText4 = annotatedStructurableText8;
                        str12 = str32;
                        str27 = beginStructure.decodeStringElement(serialDescriptor, 0);
                        i13 |= 1;
                        annotatedStructurableText8 = annotatedStructurableText4;
                        str26 = str12;
                        bool3 = bool2;
                        str22 = str11;
                    case 1:
                        str11 = str22;
                        bool2 = bool3;
                        annotatedStructurableText4 = annotatedStructurableText8;
                        str12 = str32;
                        i16 = beginStructure.decodeIntElement(serialDescriptor, 1);
                        i13 |= 2;
                        annotatedStructurableText8 = annotatedStructurableText4;
                        str26 = str12;
                        bool3 = bool2;
                        str22 = str11;
                    case 2:
                        str11 = str22;
                        bool2 = bool3;
                        annotatedStructurableText4 = annotatedStructurableText8;
                        str12 = str32;
                        i15 = beginStructure.decodeIntElement(serialDescriptor, 2);
                        i13 |= 4;
                        annotatedStructurableText8 = annotatedStructurableText4;
                        str26 = str12;
                        bool3 = bool2;
                        str22 = str11;
                    case 3:
                        str11 = str22;
                        bool2 = bool3;
                        annotatedStructurableText4 = annotatedStructurableText8;
                        str12 = str32;
                        i14 = beginStructure.decodeIntElement(serialDescriptor, 3);
                        i13 |= 8;
                        annotatedStructurableText8 = annotatedStructurableText4;
                        str26 = str12;
                        bool3 = bool2;
                        str22 = str11;
                    case 4:
                        str11 = str22;
                        bool2 = bool3;
                        str12 = str32;
                        str28 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, v1.a, str28);
                        i13 |= 16;
                        annotatedStructurableText8 = annotatedStructurableText8;
                        str29 = str29;
                        str26 = str12;
                        bool3 = bool2;
                        str22 = str11;
                    case 5:
                        str11 = str22;
                        bool2 = bool3;
                        str12 = str32;
                        str29 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, v1.a, str29);
                        i13 |= 32;
                        annotatedStructurableText8 = annotatedStructurableText8;
                        str30 = str30;
                        str26 = str12;
                        bool3 = bool2;
                        str22 = str11;
                    case 6:
                        str11 = str22;
                        bool2 = bool3;
                        str12 = str32;
                        str30 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 6, v1.a, str30);
                        i13 |= 64;
                        annotatedStructurableText8 = annotatedStructurableText8;
                        str31 = str31;
                        str26 = str12;
                        bool3 = bool2;
                        str22 = str11;
                    case 7:
                        str11 = str22;
                        bool2 = bool3;
                        str12 = str32;
                        str31 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 7, v1.a, str31);
                        i13 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                        annotatedStructurableText8 = annotatedStructurableText8;
                        num18 = num18;
                        str26 = str12;
                        bool3 = bool2;
                        str22 = str11;
                    case 8:
                        str11 = str22;
                        bool2 = bool3;
                        annotatedStructurableText4 = annotatedStructurableText8;
                        str12 = str32;
                        num18 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, o0.a, num18);
                        i13 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                        annotatedStructurableText8 = annotatedStructurableText4;
                        str26 = str12;
                        bool3 = bool2;
                        str22 = str11;
                    case 9:
                        str11 = str22;
                        String str33 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 9, v1.a, str32);
                        i13 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                        annotatedStructurableText8 = annotatedStructurableText8;
                        bool3 = bool3;
                        str26 = str33;
                        str22 = str11;
                    case 10:
                        annotatedStructurableText8 = (AnnotatedStructurableText) beginStructure.decodeNullableSerializableElement(serialDescriptor, 10, AnnotatedStructurableTextSerializer.INSTANCE, annotatedStructurableText8);
                        i13 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET;
                        str22 = str22;
                        str26 = str32;
                    case 11:
                        annotatedStructurableText3 = annotatedStructurableText8;
                        num15 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 11, o0.a, num15);
                        i13 |= RecyclerView.ItemAnimator.FLAG_MOVED;
                        str26 = str32;
                        annotatedStructurableText8 = annotatedStructurableText3;
                    case 12:
                        annotatedStructurableText3 = annotatedStructurableText8;
                        annotatedStructurableText7 = (AnnotatedStructurableText) beginStructure.decodeNullableSerializableElement(serialDescriptor, 12, AnnotatedStructurableTextSerializer.INSTANCE, annotatedStructurableText7);
                        i13 |= RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
                        str26 = str32;
                        annotatedStructurableText8 = annotatedStructurableText3;
                    case 13:
                        annotatedStructurableText3 = annotatedStructurableText8;
                        num17 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 13, o0.a, num17);
                        i13 |= 8192;
                        str26 = str32;
                        annotatedStructurableText8 = annotatedStructurableText3;
                    case 14:
                        annotatedStructurableText3 = annotatedStructurableText8;
                        str22 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 14, v1.a, str22);
                        i13 |= 16384;
                        str26 = str32;
                        annotatedStructurableText8 = annotatedStructurableText3;
                    case 15:
                        annotatedStructurableText3 = annotatedStructurableText8;
                        num7 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 15, o0.a, num7);
                        i12 = PeerConnection.PORTALLOCATOR_ENABLE_ANY_ADDRESS_PORTS;
                        i13 |= i12;
                        str26 = str32;
                        annotatedStructurableText8 = annotatedStructurableText3;
                    case 16:
                        annotatedStructurableText3 = annotatedStructurableText8;
                        str25 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 16, v1.a, str25);
                        i12 = KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT;
                        i13 |= i12;
                        str26 = str32;
                        annotatedStructurableText8 = annotatedStructurableText3;
                    case 17:
                        annotatedStructurableText3 = annotatedStructurableText8;
                        num16 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 17, o0.a, num16);
                        i12 = KeyCommandDescriptor.ModifierFlags.SHIFT;
                        i13 |= i12;
                        str26 = str32;
                        annotatedStructurableText8 = annotatedStructurableText3;
                    case 18:
                        annotatedStructurableText3 = annotatedStructurableText8;
                        str24 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 18, v1.a, str24);
                        i12 = KeyCommandDescriptor.ModifierFlags.CONTROL;
                        i13 |= i12;
                        str26 = str32;
                        annotatedStructurableText8 = annotatedStructurableText3;
                    case 19:
                        annotatedStructurableText3 = annotatedStructurableText8;
                        num14 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 19, o0.a, num14);
                        i12 = KeyCommandDescriptor.ModifierFlags.ALTERNATE;
                        i13 |= i12;
                        str26 = str32;
                        annotatedStructurableText8 = annotatedStructurableText3;
                    case 20:
                        annotatedStructurableText3 = annotatedStructurableText8;
                        str23 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 20, v1.a, str23);
                        i12 = KeyCommandDescriptor.ModifierFlags.COMMAND;
                        i13 |= i12;
                        str26 = str32;
                        annotatedStructurableText8 = annotatedStructurableText3;
                    case 21:
                        annotatedStructurableText3 = annotatedStructurableText8;
                        bool3 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 21, g.a, bool3);
                        i12 = KeyCommandDescriptor.ModifierFlags.NUMERIC_PAD;
                        i13 |= i12;
                        str26 = str32;
                        annotatedStructurableText8 = annotatedStructurableText3;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            str = str28;
            num = num14;
            str2 = str23;
            num2 = num15;
            str3 = str24;
            num3 = num16;
            i5 = i13;
            num4 = num7;
            str4 = str25;
            num5 = num17;
            annotatedStructurableText = annotatedStructurableText7;
            annotatedStructurableText2 = annotatedStructurableText8;
            str5 = str27;
            str6 = str29;
            str7 = str30;
            str8 = str31;
            num6 = num18;
            str9 = str26;
            bool = bool3;
            str10 = str22;
            i6 = i14;
            i10 = i15;
            i11 = i16;
        }
        beginStructure.endStructure(serialDescriptor);
        return new ReferralEmbed.Resolved(i5, str5, i11, i10, i6, str, str6, str7, str8, num6, str9, annotatedStructurableText2, num2, annotatedStructurableText, num5, str10, num4, str4, num3, str3, num, str2, bool, (SerializationConstructorMarker) null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull ReferralEmbed.Resolved value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        ReferralEmbed.Resolved.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
