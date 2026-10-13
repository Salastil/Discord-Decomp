package com.discord.chat.bridge.botuikit;

import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import bs.v1;
import com.discord.chat.bridge.botuikit.SelectOptionType;
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
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/botuikit/SearchableSelectItem.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/botuikit/SearchableSelectItem;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/botuikit/SearchableSelectItem;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/botuikit/SearchableSelectItem;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class SearchableSelectItem$$serializer implements h0 {

    @NotNull
    public static final SearchableSelectItem$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        SearchableSelectItem$$serializer searchableSelectItem$$serializer = new SearchableSelectItem$$serializer();
        INSTANCE = searchableSelectItem$$serializer;
        j1 j1Var = new j1("com.discord.chat.bridge.botuikit.SearchableSelectItem", searchableSelectItem$$serializer, 6);
        j1Var.k("label", false);
        j1Var.k("value", false);
        j1Var.k("type", false);
        j1Var.k("iconSrc", true);
        j1Var.k("iconColor", true);
        j1Var.k("iconEmoji", true);
        descriptor = j1Var;
    }

    private SearchableSelectItem$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        v1 v1Var = v1.a;
        return new KSerializer[]{v1Var, v1Var, SelectOptionType.Serializer.INSTANCE, e.o(v1Var), e.o(o0.a), e.o(ComponentEmoji$$serializer.INSTANCE)};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SearchableSelectItem deserialize(@NotNull Decoder decoder) {
        int i5;
        String str;
        String str2;
        SelectOptionType selectOptionType;
        String str3;
        Integer num;
        ComponentEmoji componentEmoji;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        String str4 = null;
        if (beginStructure.decodeSequentially()) {
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 0);
            String decodeStringElement2 = beginStructure.decodeStringElement(serialDescriptor, 1);
            SelectOptionType selectOptionType2 = (SelectOptionType) beginStructure.decodeSerializableElement(serialDescriptor, 2, SelectOptionType.Serializer.INSTANCE, null);
            String str5 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, v1.a, null);
            Integer num2 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, o0.a, null);
            str = decodeStringElement;
            componentEmoji = (ComponentEmoji) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, ComponentEmoji$$serializer.INSTANCE, null);
            str3 = str5;
            num = num2;
            selectOptionType = selectOptionType2;
            str2 = decodeStringElement2;
            i5 = 63;
        } else {
            boolean z5 = true;
            int i6 = 0;
            String str6 = null;
            SelectOptionType selectOptionType3 = null;
            String str7 = null;
            Integer num3 = null;
            ComponentEmoji componentEmoji2 = null;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z5 = false;
                        continue;
                    case 0:
                        str4 = beginStructure.decodeStringElement(serialDescriptor, 0);
                        i6 |= 1;
                        continue;
                    case 1:
                        str6 = beginStructure.decodeStringElement(serialDescriptor, 1);
                        i6 |= 2;
                        break;
                    case 2:
                        selectOptionType3 = (SelectOptionType) beginStructure.decodeSerializableElement(serialDescriptor, 2, SelectOptionType.Serializer.INSTANCE, selectOptionType3);
                        i6 |= 4;
                        break;
                    case 3:
                        str7 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, v1.a, str7);
                        i6 |= 8;
                        break;
                    case 4:
                        num3 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, o0.a, num3);
                        i6 |= 16;
                        break;
                    case 5:
                        componentEmoji2 = (ComponentEmoji) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, ComponentEmoji$$serializer.INSTANCE, componentEmoji2);
                        i6 |= 32;
                        break;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            i5 = i6;
            str = str4;
            str2 = str6;
            selectOptionType = selectOptionType3;
            str3 = str7;
            num = num3;
            componentEmoji = componentEmoji2;
        }
        beginStructure.endStructure(serialDescriptor);
        return new SearchableSelectItem(i5, str, str2, selectOptionType, str3, num, componentEmoji, (SerializationConstructorMarker) null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull SearchableSelectItem value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        SearchableSelectItem.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
