package com.discord.chat.bridge.gift_intent;

import androidx.recyclerview.widget.RecyclerView;
import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import bs.v1;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.uimanager.ViewProps;
import ds.r;
import fo.d;
import java.util.List;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.DeserializationStrategy;
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
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/gift_intent/GiftIntentEmbed.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/gift_intent/GiftIntentEmbed;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/gift_intent/GiftIntentEmbed;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/gift_intent/GiftIntentEmbed;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class GiftIntentEmbed$$serializer implements h0 {

    @NotNull
    public static final GiftIntentEmbed$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        GiftIntentEmbed$$serializer giftIntentEmbed$$serializer = new GiftIntentEmbed$$serializer();
        INSTANCE = giftIntentEmbed$$serializer;
        j1 j1Var = new j1("com.discord.chat.bridge.gift_intent.GiftIntentEmbed", giftIntentEmbed$$serializer, 16);
        j1Var.k("recipientAvatarUrl", false);
        j1Var.k("currentUserAvatarUrl", true);
        j1Var.k("recipientName", false);
        j1Var.k("headerText", false);
        j1Var.k("subHeaderParts", false);
        j1Var.k("recipientUserId", false);
        j1Var.k("giftIntentType", false);
        j1Var.k("headerTextColor", false);
        j1Var.k("subHeaderTextColor", false);
        j1Var.k(ViewProps.BACKGROUND_COLOR, false);
        j1Var.k(ViewProps.BORDER_COLOR, false);
        j1Var.k("subHeaderIconUrl", true);
        j1Var.k("primaryCtaLabel", false);
        j1Var.k("primaryCtaIconUrl", true);
        j1Var.k("secondaryCtaIconUrl", true);
        j1Var.k("secondaryCtaAccessibilityLabel", false);
        descriptor = j1Var;
    }

    private GiftIntentEmbed$$serializer() {
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        Lazy[] lazyArr;
        lazyArr = GiftIntentEmbed.$childSerializers;
        v1 v1Var = v1.a;
        o0 o0Var = o0.a;
        return new KSerializer[]{v1Var, e.o(v1Var), v1Var, v1Var, lazyArr[4].getValue(), v1Var, o0Var, o0Var, o0Var, o0Var, o0Var, e.o(v1Var), v1Var, e.o(v1Var), e.o(v1Var), v1Var};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final GiftIntentEmbed deserialize(@NotNull Decoder decoder) {
        Lazy[] lazyArr;
        int i5;
        String str;
        String str2;
        List list;
        String str3;
        String str4;
        String str5;
        String str6;
        String str7;
        String str8;
        String str9;
        String str10;
        int i6;
        int i10;
        int i11;
        int i12;
        int i13;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        lazyArr = GiftIntentEmbed.$childSerializers;
        int i14 = 10;
        if (beginStructure.decodeSequentially()) {
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 0);
            v1 v1Var = v1.a;
            String str11 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 1, v1Var, null);
            String decodeStringElement2 = beginStructure.decodeStringElement(serialDescriptor, 2);
            String decodeStringElement3 = beginStructure.decodeStringElement(serialDescriptor, 3);
            List list2 = (List) beginStructure.decodeSerializableElement(serialDescriptor, 4, (DeserializationStrategy) lazyArr[4].getValue(), null);
            String decodeStringElement4 = beginStructure.decodeStringElement(serialDescriptor, 5);
            int decodeIntElement = beginStructure.decodeIntElement(serialDescriptor, 6);
            int decodeIntElement2 = beginStructure.decodeIntElement(serialDescriptor, 7);
            int decodeIntElement3 = beginStructure.decodeIntElement(serialDescriptor, 8);
            int decodeIntElement4 = beginStructure.decodeIntElement(serialDescriptor, 9);
            int decodeIntElement5 = beginStructure.decodeIntElement(serialDescriptor, 10);
            String str12 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 11, v1Var, null);
            String decodeStringElement5 = beginStructure.decodeStringElement(serialDescriptor, 12);
            String str13 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 13, v1Var, null);
            i5 = 65535;
            str2 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 14, v1Var, null);
            str5 = decodeStringElement;
            str6 = decodeStringElement2;
            str8 = decodeStringElement4;
            str3 = str11;
            str10 = beginStructure.decodeStringElement(serialDescriptor, 15);
            i6 = decodeIntElement5;
            i10 = decodeIntElement4;
            i11 = decodeIntElement2;
            i12 = decodeIntElement;
            i13 = decodeIntElement3;
            str7 = decodeStringElement3;
            str = str12;
            str4 = str13;
            str9 = decodeStringElement5;
            list = list2;
        } else {
            int i15 = 15;
            int i16 = 4;
            boolean z5 = true;
            int i17 = 0;
            int i18 = 0;
            int i19 = 0;
            int i20 = 0;
            int i21 = 0;
            String str14 = null;
            String str15 = null;
            List list3 = null;
            String str16 = null;
            String str17 = null;
            String str18 = null;
            String str19 = null;
            String str20 = null;
            String str21 = null;
            String str22 = null;
            i5 = 0;
            String str23 = null;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z5 = false;
                        i15 = 15;
                        i16 = 4;
                    case 0:
                        str17 = beginStructure.decodeStringElement(serialDescriptor, 0);
                        i5 |= 1;
                        i15 = 15;
                        i14 = 10;
                        i16 = 4;
                    case 1:
                        str23 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 1, v1.a, str23);
                        i5 |= 2;
                        i15 = 15;
                        i14 = 10;
                        i16 = 4;
                    case 2:
                        str18 = beginStructure.decodeStringElement(serialDescriptor, 2);
                        i5 |= 4;
                        i15 = 15;
                        i14 = 10;
                    case 3:
                        str19 = beginStructure.decodeStringElement(serialDescriptor, 3);
                        i5 |= 8;
                        i15 = 15;
                        i14 = 10;
                    case 4:
                        list3 = (List) beginStructure.decodeSerializableElement(serialDescriptor, i16, (DeserializationStrategy) lazyArr[i16].getValue(), list3);
                        i5 |= 16;
                        i15 = 15;
                        i14 = 10;
                    case 5:
                        str20 = beginStructure.decodeStringElement(serialDescriptor, 5);
                        i5 |= 32;
                        i15 = 15;
                    case 6:
                        i20 = beginStructure.decodeIntElement(serialDescriptor, 6);
                        i5 |= 64;
                        i15 = 15;
                    case 7:
                        i19 = beginStructure.decodeIntElement(serialDescriptor, 7);
                        i5 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                        i15 = 15;
                    case 8:
                        i21 = beginStructure.decodeIntElement(serialDescriptor, 8);
                        i5 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                        i15 = 15;
                    case 9:
                        i18 = beginStructure.decodeIntElement(serialDescriptor, 9);
                        i5 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                        i15 = 15;
                    case 10:
                        i17 = beginStructure.decodeIntElement(serialDescriptor, i14);
                        i5 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET;
                        i15 = 15;
                    case 11:
                        str14 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 11, v1.a, str14);
                        i5 |= RecyclerView.ItemAnimator.FLAG_MOVED;
                        i15 = 15;
                    case 12:
                        str21 = beginStructure.decodeStringElement(serialDescriptor, 12);
                        i5 |= RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
                        i15 = 15;
                    case 13:
                        str16 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 13, v1.a, str16);
                        i5 |= 8192;
                        i15 = 15;
                    case 14:
                        str15 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 14, v1.a, str15);
                        i5 |= 16384;
                        i15 = 15;
                    case 15:
                        str22 = beginStructure.decodeStringElement(serialDescriptor, i15);
                        i5 |= PeerConnection.PORTALLOCATOR_ENABLE_ANY_ADDRESS_PORTS;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            str = str14;
            str2 = str15;
            list = list3;
            str3 = str23;
            str4 = str16;
            str5 = str17;
            str6 = str18;
            str7 = str19;
            str8 = str20;
            str9 = str21;
            str10 = str22;
            i6 = i17;
            i10 = i18;
            i11 = i19;
            i12 = i20;
            i13 = i21;
        }
        int i22 = i5;
        beginStructure.endStructure(serialDescriptor);
        return new GiftIntentEmbed(i22, str5, str3, str6, str7, list, str8, i12, i11, i13, i10, i6, str, str9, str4, str2, str10, (SerializationConstructorMarker) null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull GiftIntentEmbed value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        GiftIntentEmbed.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
