package com.discord.chat.bridge.embed;

import bs.h0;
import bs.h1;
import bs.j1;
import bs.v1;
import com.discord.chat.bridge.structurabletext.StructurableText;
import com.discord.chat.bridge.structurabletext.StructurableTextSerializer;
import com.facebook.react.devsupport.StackTraceHelper;
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
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/embed/EmbedField.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/embed/EmbedField;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/embed/EmbedField;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/embed/EmbedField;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class EmbedField$$serializer implements h0 {

    @NotNull
    public static final EmbedField$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        EmbedField$$serializer embedField$$serializer = new EmbedField$$serializer();
        INSTANCE = embedField$$serializer;
        j1 j1Var = new j1("com.discord.chat.bridge.embed.EmbedField", embedField$$serializer, 4);
        j1Var.k("rawName", true);
        j1Var.k("rawValue", true);
        j1Var.k(StackTraceHelper.NAME_KEY, true);
        j1Var.k("value", true);
        descriptor = j1Var;
    }

    private EmbedField$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        v1 v1Var = v1.a;
        KSerializer o6 = e.o(v1Var);
        KSerializer o7 = e.o(v1Var);
        StructurableTextSerializer structurableTextSerializer = StructurableTextSerializer.INSTANCE;
        return new KSerializer[]{o6, o7, e.o(structurableTextSerializer), e.o(structurableTextSerializer)};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final EmbedField deserialize(@NotNull Decoder decoder) {
        int i5;
        String str;
        String str2;
        StructurableText structurableText;
        StructurableText structurableText2;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        String str3 = null;
        if (beginStructure.decodeSequentially()) {
            v1 v1Var = v1.a;
            String str4 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 0, v1Var, null);
            String str5 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 1, v1Var, null);
            StructurableTextSerializer structurableTextSerializer = StructurableTextSerializer.INSTANCE;
            StructurableText structurableText3 = (StructurableText) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, structurableTextSerializer, null);
            str2 = str5;
            structurableText2 = (StructurableText) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, structurableTextSerializer, null);
            structurableText = structurableText3;
            i5 = 15;
            str = str4;
        } else {
            boolean z5 = true;
            int i6 = 0;
            String str6 = null;
            StructurableText structurableText4 = null;
            StructurableText structurableText5 = null;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                if (decodeElementIndex == -1) {
                    z5 = false;
                } else if (decodeElementIndex == 0) {
                    str3 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 0, v1.a, str3);
                    i6 |= 1;
                } else if (decodeElementIndex == 1) {
                    str6 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 1, v1.a, str6);
                    i6 |= 2;
                } else if (decodeElementIndex == 2) {
                    structurableText4 = (StructurableText) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, StructurableTextSerializer.INSTANCE, structurableText4);
                    i6 |= 4;
                } else {
                    if (decodeElementIndex != 3) {
                        throw new r(decodeElementIndex);
                    }
                    structurableText5 = (StructurableText) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, StructurableTextSerializer.INSTANCE, structurableText5);
                    i6 |= 8;
                }
            }
            i5 = i6;
            str = str3;
            str2 = str6;
            structurableText = structurableText4;
            structurableText2 = structurableText5;
        }
        beginStructure.endStructure(serialDescriptor);
        return new EmbedField(i5, str, str2, structurableText, structurableText2, (SerializationConstructorMarker) null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull EmbedField value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        EmbedField.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
