package com.discord.chat.bridge.row;

import bs.g;
import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import com.discord.chat.bridge.ChangeType;
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
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/row/LoadingRow.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/row/LoadingRow;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/row/LoadingRow;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/row/LoadingRow;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class LoadingRow$$serializer implements h0 {

    @NotNull
    public static final LoadingRow$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        LoadingRow$$serializer loadingRow$$serializer = new LoadingRow$$serializer();
        INSTANCE = loadingRow$$serializer;
        j1 j1Var = new j1("4", loadingRow$$serializer, 5);
        j1Var.k("index", false);
        j1Var.k("changeType", false);
        j1Var.k("button", false);
        j1Var.k(ViewProps.COLOR, false);
        j1Var.k("isLoading", false);
        descriptor = j1Var;
    }

    private LoadingRow$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        o0 o0Var = o0.a;
        return new KSerializer[]{o0Var, ChangeType.Serializer.INSTANCE, LoadMoreButton$$serializer.INSTANCE, o0Var, g.a};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final LoadingRow deserialize(@NotNull Decoder decoder) {
        int i5;
        int i6;
        boolean z5;
        int i10;
        ChangeType changeType;
        LoadMoreButton loadMoreButton;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        if (beginStructure.decodeSequentially()) {
            i5 = beginStructure.decodeIntElement(serialDescriptor, 0);
            ChangeType changeType2 = (ChangeType) beginStructure.decodeSerializableElement(serialDescriptor, 1, ChangeType.Serializer.INSTANCE, null);
            LoadMoreButton loadMoreButton2 = (LoadMoreButton) beginStructure.decodeSerializableElement(serialDescriptor, 2, LoadMoreButton$$serializer.INSTANCE, null);
            i6 = beginStructure.decodeIntElement(serialDescriptor, 3);
            z5 = beginStructure.decodeBooleanElement(serialDescriptor, 4);
            loadMoreButton = loadMoreButton2;
            changeType = changeType2;
            i10 = 31;
        } else {
            boolean z6 = true;
            i5 = 0;
            boolean z7 = false;
            int i11 = 0;
            ChangeType changeType3 = null;
            LoadMoreButton loadMoreButton3 = null;
            int i12 = 0;
            while (z6) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                if (decodeElementIndex == -1) {
                    z6 = false;
                } else if (decodeElementIndex == 0) {
                    i5 = beginStructure.decodeIntElement(serialDescriptor, 0);
                    i11 |= 1;
                } else if (decodeElementIndex == 1) {
                    changeType3 = (ChangeType) beginStructure.decodeSerializableElement(serialDescriptor, 1, ChangeType.Serializer.INSTANCE, changeType3);
                    i11 |= 2;
                } else if (decodeElementIndex == 2) {
                    loadMoreButton3 = (LoadMoreButton) beginStructure.decodeSerializableElement(serialDescriptor, 2, LoadMoreButton$$serializer.INSTANCE, loadMoreButton3);
                    i11 |= 4;
                } else if (decodeElementIndex == 3) {
                    i12 = beginStructure.decodeIntElement(serialDescriptor, 3);
                    i11 |= 8;
                } else {
                    if (decodeElementIndex != 4) {
                        throw new r(decodeElementIndex);
                    }
                    z7 = beginStructure.decodeBooleanElement(serialDescriptor, 4);
                    i11 |= 16;
                }
            }
            i6 = i12;
            z5 = z7;
            i10 = i11;
            changeType = changeType3;
            loadMoreButton = loadMoreButton3;
        }
        int i13 = i5;
        beginStructure.endStructure(serialDescriptor);
        return new LoadingRow(i10, i13, changeType, loadMoreButton, i6, z5, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull LoadingRow value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        LoadingRow.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
