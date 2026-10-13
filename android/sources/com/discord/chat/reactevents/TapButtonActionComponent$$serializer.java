package com.discord.chat.reactevents;

import bs.h0;
import bs.h1;
import bs.j1;
import bs.v1;
import com.discord.primitives.MessageId;
import com.discord.primitives.MessageId$$serializer;
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
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/reactevents/TapButtonActionComponent.$serializer", "Lbs/h0;", "Lcom/discord/chat/reactevents/TapButtonActionComponent;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/reactevents/TapButtonActionComponent;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/reactevents/TapButtonActionComponent;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class TapButtonActionComponent$$serializer implements h0 {

    @NotNull
    public static final TapButtonActionComponent$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        TapButtonActionComponent$$serializer tapButtonActionComponent$$serializer = new TapButtonActionComponent$$serializer();
        INSTANCE = tapButtonActionComponent$$serializer;
        j1 j1Var = new j1("com.discord.chat.reactevents.TapButtonActionComponent", tapButtonActionComponent$$serializer, 2);
        j1Var.k("messageId", false);
        j1Var.k("componentId", false);
        descriptor = j1Var;
    }

    private TapButtonActionComponent$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        return new KSerializer[]{MessageId$$serializer.INSTANCE, v1.a};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final TapButtonActionComponent deserialize(@NotNull Decoder decoder) {
        String str;
        int i5;
        String str2;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        if (beginStructure.decodeSequentially()) {
            MessageId messageId = (MessageId) beginStructure.decodeSerializableElement(serialDescriptor, 0, MessageId$$serializer.INSTANCE, null);
            String m1198unboximpl = messageId != null ? messageId.m1198unboximpl() : null;
            str = beginStructure.decodeStringElement(serialDescriptor, 1);
            i5 = 3;
            str2 = m1198unboximpl;
        } else {
            boolean z5 = true;
            int i6 = 0;
            str = null;
            String str3 = null;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                if (decodeElementIndex == -1) {
                    z5 = false;
                } else if (decodeElementIndex == 0) {
                    MessageId messageId2 = (MessageId) beginStructure.decodeSerializableElement(serialDescriptor, 0, MessageId$$serializer.INSTANCE, str3 != null ? MessageId.m1189boximpl(str3) : null);
                    str3 = messageId2 != null ? messageId2.m1198unboximpl() : null;
                    i6 |= 1;
                } else {
                    if (decodeElementIndex != 1) {
                        throw new r(decodeElementIndex);
                    }
                    str = beginStructure.decodeStringElement(serialDescriptor, 1);
                    i6 |= 2;
                }
            }
            i5 = i6;
            str2 = str3;
        }
        String str4 = str;
        beginStructure.endStructure(serialDescriptor);
        return new TapButtonActionComponent(i5, str2, str4, null, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull TapButtonActionComponent value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        TapButtonActionComponent.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
