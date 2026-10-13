package com.discord.chat.bridge.premium_group_invite;

import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import bs.v1;
import com.discord.chat.bridge.structurabletext.AnnotatedStructurableText;
import com.discord.chat.bridge.structurabletext.AnnotatedStructurableTextSerializer;
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
import org.jetbrains.annotations.NotNull;

@d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/premium_group_invite/PremiumGroupInviteEmbed.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/premium_group_invite/PremiumGroupInviteEmbed;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/premium_group_invite/PremiumGroupInviteEmbed;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/premium_group_invite/PremiumGroupInviteEmbed;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class PremiumGroupInviteEmbed$$serializer implements h0 {

    @NotNull
    public static final PremiumGroupInviteEmbed$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        PremiumGroupInviteEmbed$$serializer premiumGroupInviteEmbed$$serializer = new PremiumGroupInviteEmbed$$serializer();
        INSTANCE = premiumGroupInviteEmbed$$serializer;
        j1 j1Var = new j1("com.discord.chat.bridge.premium_group_invite.PremiumGroupInviteEmbed", premiumGroupInviteEmbed$$serializer, 11);
        j1Var.k("headerText", false);
        j1Var.k("headerColor", false);
        j1Var.k(ViewProps.BACKGROUND_COLOR, false);
        j1Var.k(ViewProps.BORDER_COLOR, false);
        j1Var.k("headerImageUrl", false);
        j1Var.k("betaPillText", false);
        j1Var.k("betaPillTextColor", false);
        j1Var.k("betaPillBackgroundColor", false);
        j1Var.k("bodyText", false);
        j1Var.k("bodyTextColor", false);
        j1Var.k("learnMoreLink", false);
        descriptor = j1Var;
    }

    private PremiumGroupInviteEmbed$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        v1 v1Var = v1.a;
        o0 o0Var = o0.a;
        return new KSerializer[]{v1Var, o0Var, o0Var, o0Var, v1Var, v1Var, o0Var, o0Var, v1Var, o0Var, AnnotatedStructurableTextSerializer.INSTANCE};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final PremiumGroupInviteEmbed deserialize(@NotNull Decoder decoder) {
        int i5;
        AnnotatedStructurableText annotatedStructurableText;
        int i6;
        int i10;
        int i11;
        int i12;
        int i13;
        String str;
        String str2;
        String str3;
        String str4;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        int i14 = 10;
        int i15 = 0;
        if (beginStructure.decodeSequentially()) {
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 0);
            int decodeIntElement = beginStructure.decodeIntElement(serialDescriptor, 1);
            int decodeIntElement2 = beginStructure.decodeIntElement(serialDescriptor, 2);
            int decodeIntElement3 = beginStructure.decodeIntElement(serialDescriptor, 3);
            String decodeStringElement2 = beginStructure.decodeStringElement(serialDescriptor, 4);
            String decodeStringElement3 = beginStructure.decodeStringElement(serialDescriptor, 5);
            int decodeIntElement4 = beginStructure.decodeIntElement(serialDescriptor, 6);
            int decodeIntElement5 = beginStructure.decodeIntElement(serialDescriptor, 7);
            String decodeStringElement4 = beginStructure.decodeStringElement(serialDescriptor, 8);
            int decodeIntElement6 = beginStructure.decodeIntElement(serialDescriptor, 9);
            i15 = 2047;
            str = decodeStringElement;
            annotatedStructurableText = (AnnotatedStructurableText) beginStructure.decodeSerializableElement(serialDescriptor, 10, AnnotatedStructurableTextSerializer.INSTANCE, null);
            i5 = decodeIntElement6;
            i6 = decodeIntElement5;
            i10 = decodeIntElement4;
            str3 = decodeStringElement3;
            i11 = decodeIntElement3;
            str4 = decodeStringElement4;
            str2 = decodeStringElement2;
            i12 = decodeIntElement2;
            i13 = decodeIntElement;
        } else {
            boolean z5 = true;
            int i16 = 0;
            int i17 = 0;
            int i18 = 0;
            int i19 = 0;
            int i20 = 0;
            AnnotatedStructurableText annotatedStructurableText2 = null;
            String str5 = null;
            String str6 = null;
            String str7 = null;
            String str8 = null;
            int i21 = 0;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z5 = false;
                        i14 = 10;
                    case 0:
                        str5 = beginStructure.decodeStringElement(serialDescriptor, 0);
                        i15 |= 1;
                        i14 = 10;
                    case 1:
                        i20 = beginStructure.decodeIntElement(serialDescriptor, 1);
                        i15 |= 2;
                        i14 = 10;
                    case 2:
                        i19 = beginStructure.decodeIntElement(serialDescriptor, 2);
                        i15 |= 4;
                    case 3:
                        i18 = beginStructure.decodeIntElement(serialDescriptor, 3);
                        i15 |= 8;
                    case 4:
                        str6 = beginStructure.decodeStringElement(serialDescriptor, 4);
                        i15 |= 16;
                    case 5:
                        str7 = beginStructure.decodeStringElement(serialDescriptor, 5);
                        i15 |= 32;
                    case 6:
                        i17 = beginStructure.decodeIntElement(serialDescriptor, 6);
                        i15 |= 64;
                    case 7:
                        i21 = beginStructure.decodeIntElement(serialDescriptor, 7);
                        i15 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    case 8:
                        str8 = beginStructure.decodeStringElement(serialDescriptor, 8);
                        i15 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                    case 9:
                        i16 = beginStructure.decodeIntElement(serialDescriptor, 9);
                        i15 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                    case 10:
                        annotatedStructurableText2 = (AnnotatedStructurableText) beginStructure.decodeSerializableElement(serialDescriptor, i14, AnnotatedStructurableTextSerializer.INSTANCE, annotatedStructurableText2);
                        i15 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            i5 = i16;
            annotatedStructurableText = annotatedStructurableText2;
            i6 = i21;
            i10 = i17;
            i11 = i18;
            i12 = i19;
            i13 = i20;
            str = str5;
            str2 = str6;
            str3 = str7;
            str4 = str8;
        }
        int i22 = i15;
        beginStructure.endStructure(serialDescriptor);
        return new PremiumGroupInviteEmbed(i22, str, i13, i12, i11, str2, str3, i10, i6, str4, i5, annotatedStructurableText, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull PremiumGroupInviteEmbed value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        PremiumGroupInviteEmbed.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
