package com.discord.chat.bridge.gift;

import androidx.recyclerview.widget.RecyclerView;
import bs.g;
import bs.g0;
import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import bs.v1;
import com.discord.chat.bridge.gift.GiftEmbed;
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
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/gift/GiftEmbed.Resolved.Valid.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/gift/GiftEmbed$Resolved$Valid;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/gift/GiftEmbed$Resolved$Valid;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/gift/GiftEmbed$Resolved$Valid;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class GiftEmbed$Resolved$Valid$$serializer implements h0 {

    @NotNull
    public static final GiftEmbed$Resolved$Valid$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        GiftEmbed$Resolved$Valid$$serializer giftEmbed$Resolved$Valid$$serializer = new GiftEmbed$Resolved$Valid$$serializer();
        INSTANCE = giftEmbed$Resolved$Valid$$serializer;
        j1 j1Var = new j1("com.discord.chat.bridge.gift.GiftEmbed.Resolved.Valid", giftEmbed$Resolved$Valid$$serializer, 18);
        j1Var.k("headerText", false);
        j1Var.k("headerColor", false);
        j1Var.k(ViewProps.BACKGROUND_COLOR, false);
        j1Var.k("thumbnailCornerRadius", false);
        j1Var.k("thumbnailUrl", true);
        j1Var.k("titleText", true);
        j1Var.k("titleColor", false);
        j1Var.k("subtitle", true);
        j1Var.k("subtitleColor", false);
        j1Var.k("bodyText", true);
        j1Var.k("bodyTextColor", false);
        j1Var.k("acceptLabelText", true);
        j1Var.k("acceptLabelColor", false);
        j1Var.k("acceptLabelBackgroundColor", false);
        j1Var.k("splashUrl", true);
        j1Var.k("splashOpacity", false);
        j1Var.k("canBeAccepted", false);
        j1Var.k("giftCode", false);
        descriptor = j1Var;
    }

    private GiftEmbed$Resolved$Valid$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        v1 v1Var = v1.a;
        KSerializer o6 = e.o(v1Var);
        KSerializer o7 = e.o(v1Var);
        KSerializer o10 = e.o(v1Var);
        KSerializer o11 = e.o(v1Var);
        KSerializer o12 = e.o(v1Var);
        KSerializer o13 = e.o(v1Var);
        o0 o0Var = o0.a;
        return new KSerializer[]{v1Var, o0Var, o0Var, o0Var, o6, o7, o0Var, o10, o0Var, o11, o0Var, o12, o0Var, o0Var, o13, g0.a, g.a, v1Var};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final GiftEmbed.Resolved.Valid deserialize(@NotNull Decoder decoder) {
        String str;
        String str2;
        int i5;
        String str3;
        int i6;
        String str4;
        String str5;
        String str6;
        int i10;
        int i11;
        int i12;
        int i13;
        float f2;
        String str7;
        int i14;
        String str8;
        int i15;
        int i16;
        boolean z5;
        char c6;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        int i17 = 8;
        if (beginStructure.decodeSequentially()) {
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 0);
            int decodeIntElement = beginStructure.decodeIntElement(serialDescriptor, 1);
            int decodeIntElement2 = beginStructure.decodeIntElement(serialDescriptor, 2);
            int decodeIntElement3 = beginStructure.decodeIntElement(serialDescriptor, 3);
            v1 v1Var = v1.a;
            String str9 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, v1Var, null);
            String str10 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, v1Var, null);
            int decodeIntElement4 = beginStructure.decodeIntElement(serialDescriptor, 6);
            String str11 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 7, v1Var, null);
            int decodeIntElement5 = beginStructure.decodeIntElement(serialDescriptor, 8);
            String str12 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 9, v1Var, null);
            int decodeIntElement6 = beginStructure.decodeIntElement(serialDescriptor, 10);
            String str13 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 11, v1Var, null);
            int decodeIntElement7 = beginStructure.decodeIntElement(serialDescriptor, 12);
            int decodeIntElement8 = beginStructure.decodeIntElement(serialDescriptor, 13);
            String str14 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 14, v1Var, null);
            float decodeFloatElement = beginStructure.decodeFloatElement(serialDescriptor, 15);
            boolean decodeBooleanElement = beginStructure.decodeBooleanElement(serialDescriptor, 16);
            str4 = str14;
            i10 = decodeIntElement5;
            i11 = decodeIntElement2;
            str8 = beginStructure.decodeStringElement(serialDescriptor, 17);
            f2 = decodeFloatElement;
            i14 = decodeIntElement7;
            str6 = str13;
            i15 = decodeIntElement6;
            str5 = str12;
            str2 = str11;
            i16 = decodeIntElement4;
            str = str10;
            z5 = decodeBooleanElement;
            str3 = str9;
            i12 = decodeIntElement;
            i6 = 262143;
            i13 = decodeIntElement3;
            i5 = decodeIntElement8;
            str7 = decodeStringElement;
        } else {
            int i18 = 17;
            boolean z6 = true;
            String str15 = null;
            String str16 = null;
            String str17 = null;
            String str18 = null;
            String str19 = null;
            String str20 = null;
            String str21 = null;
            int i19 = 0;
            int i20 = 0;
            int i21 = 0;
            int i22 = 0;
            int i23 = 0;
            int i24 = 0;
            int i25 = 0;
            boolean z7 = false;
            float f10 = 0.0f;
            String str22 = null;
            int i26 = 0;
            int i27 = 0;
            while (z6) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z6 = false;
                        i17 = 8;
                    case 0:
                        str20 = beginStructure.decodeStringElement(serialDescriptor, 0);
                        i19 |= 1;
                        i17 = 8;
                        i18 = 17;
                    case 1:
                        i21 = beginStructure.decodeIntElement(serialDescriptor, 1);
                        i19 |= 2;
                        i17 = 8;
                        i18 = 17;
                    case 2:
                        i20 = beginStructure.decodeIntElement(serialDescriptor, 2);
                        i19 |= 4;
                        i17 = 8;
                        i18 = 17;
                    case 3:
                        i22 = beginStructure.decodeIntElement(serialDescriptor, 3);
                        i19 |= 8;
                        i17 = 8;
                        i18 = 17;
                    case 4:
                        str22 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, v1.a, str22);
                        i19 |= 16;
                        i17 = 8;
                        i18 = 17;
                    case 5:
                        str15 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, v1.a, str15);
                        i19 |= 32;
                        i17 = 8;
                        i18 = 17;
                    case 6:
                        c6 = 7;
                        i25 = beginStructure.decodeIntElement(serialDescriptor, 6);
                        i19 |= 64;
                        i17 = 8;
                        i18 = 17;
                    case 7:
                        c6 = 7;
                        str16 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 7, v1.a, str16);
                        i19 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                        i17 = 8;
                        i18 = 17;
                    case 8:
                        i27 = beginStructure.decodeIntElement(serialDescriptor, i17);
                        i19 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                        i18 = 17;
                    case 9:
                        str18 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 9, v1.a, str18);
                        i19 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                        i18 = 17;
                    case 10:
                        i24 = beginStructure.decodeIntElement(serialDescriptor, 10);
                        i19 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET;
                        i18 = 17;
                    case 11:
                        str19 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 11, v1.a, str19);
                        i19 |= RecyclerView.ItemAnimator.FLAG_MOVED;
                        i18 = 17;
                    case 12:
                        i23 = beginStructure.decodeIntElement(serialDescriptor, 12);
                        i19 |= RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
                        i18 = 17;
                    case 13:
                        i26 = beginStructure.decodeIntElement(serialDescriptor, 13);
                        i19 |= 8192;
                        i18 = 17;
                    case 14:
                        str17 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 14, v1.a, str17);
                        i19 |= 16384;
                        i18 = 17;
                    case 15:
                        f10 = beginStructure.decodeFloatElement(serialDescriptor, 15);
                        i19 |= PeerConnection.PORTALLOCATOR_ENABLE_ANY_ADDRESS_PORTS;
                        i18 = 17;
                    case 16:
                        z7 = beginStructure.decodeBooleanElement(serialDescriptor, 16);
                        i19 |= KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT;
                    case 17:
                        str21 = beginStructure.decodeStringElement(serialDescriptor, i18);
                        i19 |= KeyCommandDescriptor.ModifierFlags.SHIFT;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            str = str15;
            str2 = str16;
            i5 = i26;
            str3 = str22;
            i6 = i19;
            str4 = str17;
            str5 = str18;
            str6 = str19;
            i10 = i27;
            i11 = i20;
            i12 = i21;
            i13 = i22;
            f2 = f10;
            str7 = str20;
            i14 = i23;
            str8 = str21;
            i15 = i24;
            i16 = i25;
            z5 = z7;
        }
        beginStructure.endStructure(serialDescriptor);
        return new GiftEmbed.Resolved.Valid(i6, str7, i12, i11, i13, str3, str, i16, str2, i10, str5, i15, str6, i14, i5, str4, f2, z5, str8, (SerializationConstructorMarker) null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull GiftEmbed.Resolved.Valid value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        GiftEmbed.Resolved.Valid.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
