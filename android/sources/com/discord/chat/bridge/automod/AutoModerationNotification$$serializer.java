package com.discord.chat.bridge.automod;

import androidx.recyclerview.widget.RecyclerView;
import bs.g;
import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import bs.v1;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
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

@d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/automod/AutoModerationNotification.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/automod/AutoModerationNotification;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/automod/AutoModerationNotification;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/automod/AutoModerationNotification;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class AutoModerationNotification$$serializer implements h0 {

    @NotNull
    public static final AutoModerationNotification$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        AutoModerationNotification$$serializer autoModerationNotification$$serializer = new AutoModerationNotification$$serializer();
        INSTANCE = autoModerationNotification$$serializer;
        j1 j1Var = new j1("com.discord.chat.bridge.automod.AutoModerationNotification", autoModerationNotification$$serializer, 13);
        j1Var.k("header", false);
        j1Var.k("headerColor", false);
        j1Var.k("headerIconURL", false);
        j1Var.k("headerIconColor", false);
        j1Var.k("subtitleLeft", true);
        j1Var.k("subtitleRight", true);
        j1Var.k("body", true);
        j1Var.k("shouldShowActions", false);
        j1Var.k("enabledByUsername", true);
        j1Var.k("enabledByAvatarURL", true);
        j1Var.k("enabledByColor", true);
        j1Var.k("severity", true);
        j1Var.k("startTime", true);
        descriptor = j1Var;
    }

    private AutoModerationNotification$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        v1 v1Var = v1.a;
        o0 o0Var = o0.a;
        return new KSerializer[]{v1Var, o0Var, v1Var, o0Var, e.o(v1Var), e.o(v1Var), e.o(v1Var), g.a, e.o(v1Var), e.o(v1Var), e.o(o0Var), e.o(v1Var), e.o(v1Var)};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final AutoModerationNotification deserialize(@NotNull Decoder decoder) {
        int i5;
        String str;
        String str2;
        String str3;
        String str4;
        Integer num;
        String str5;
        String str6;
        String str7;
        String str8;
        String str9;
        boolean z5;
        int i6;
        int i10;
        char c6;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        int i11 = 10;
        char c8 = '\t';
        if (beginStructure.decodeSequentially()) {
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 0);
            int decodeIntElement = beginStructure.decodeIntElement(serialDescriptor, 1);
            String decodeStringElement2 = beginStructure.decodeStringElement(serialDescriptor, 2);
            int decodeIntElement2 = beginStructure.decodeIntElement(serialDescriptor, 3);
            v1 v1Var = v1.a;
            String str10 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, v1Var, null);
            String str11 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, v1Var, null);
            String str12 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 6, v1Var, null);
            boolean decodeBooleanElement = beginStructure.decodeBooleanElement(serialDescriptor, 7);
            String str13 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, v1Var, null);
            String str14 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 9, v1Var, null);
            Integer num2 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 10, o0.a, null);
            String str15 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 11, v1Var, null);
            i5 = 8191;
            str3 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 12, v1Var, null);
            num = num2;
            str4 = str15;
            str6 = str14;
            z5 = decodeBooleanElement;
            str7 = str12;
            str8 = str11;
            i6 = decodeIntElement2;
            str5 = str13;
            str9 = str10;
            str2 = decodeStringElement2;
            i10 = decodeIntElement;
            str = decodeStringElement;
        } else {
            String str16 = null;
            String str17 = null;
            String str18 = null;
            String str19 = null;
            Integer num3 = null;
            String str20 = null;
            String str21 = null;
            String str22 = null;
            boolean z6 = true;
            boolean z7 = false;
            int i12 = 0;
            int i13 = 0;
            String str23 = null;
            String str24 = null;
            i5 = 0;
            while (z6) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z6 = false;
                    case 0:
                        i5 |= 1;
                        str16 = beginStructure.decodeStringElement(serialDescriptor, 0);
                        i11 = 10;
                        c8 = '\t';
                    case 1:
                        i13 = beginStructure.decodeIntElement(serialDescriptor, 1);
                        i5 |= 2;
                        i11 = 10;
                        c8 = '\t';
                    case 2:
                        i5 |= 4;
                        str17 = beginStructure.decodeStringElement(serialDescriptor, 2);
                        i11 = 10;
                        c8 = '\t';
                    case 3:
                        i12 = beginStructure.decodeIntElement(serialDescriptor, 3);
                        i5 |= 8;
                        i11 = 10;
                        c8 = '\t';
                    case 4:
                        str24 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, v1.a, str24);
                        i5 |= 16;
                        i11 = 10;
                        c8 = '\t';
                    case 5:
                        str23 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, v1.a, str23);
                        i5 |= 32;
                        i11 = 10;
                        c8 = '\t';
                    case 6:
                        str22 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 6, v1.a, str22);
                        i5 |= 64;
                        i11 = 10;
                        c8 = '\t';
                    case 7:
                        c6 = '\b';
                        z7 = beginStructure.decodeBooleanElement(serialDescriptor, 7);
                        i5 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                        i11 = 10;
                        c8 = '\t';
                    case 8:
                        c6 = '\b';
                        str20 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, v1.a, str20);
                        i5 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                        i11 = 10;
                        c8 = '\t';
                    case 9:
                        str21 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 9, v1.a, str21);
                        i5 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                        c8 = '\t';
                        i11 = 10;
                    case 10:
                        num3 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, i11, o0.a, num3);
                        i5 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET;
                        c8 = '\t';
                    case 11:
                        str19 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 11, v1.a, str19);
                        i5 |= RecyclerView.ItemAnimator.FLAG_MOVED;
                        c8 = '\t';
                    case 12:
                        str18 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 12, v1.a, str18);
                        i5 |= RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
                        c8 = '\t';
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            str = str16;
            str2 = str17;
            str3 = str18;
            str4 = str19;
            num = num3;
            str5 = str20;
            str6 = str21;
            str7 = str22;
            str8 = str23;
            str9 = str24;
            z5 = z7;
            i6 = i12;
            i10 = i13;
        }
        int i14 = i5;
        beginStructure.endStructure(serialDescriptor);
        return new AutoModerationNotification(i14, str, i10, str2, i6, str9, str8, str7, z5, str5, str6, num, str4, str3, (SerializationConstructorMarker) null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull AutoModerationNotification value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        AutoModerationNotification.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
