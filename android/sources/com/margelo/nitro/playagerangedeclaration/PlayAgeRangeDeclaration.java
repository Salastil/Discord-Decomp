package com.margelo.nitro.playagerangedeclaration;

import com.margelo.nitro.core.Promise;
import kotlin.Metadata;

@Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0007\u0018\u00002\u00020\u0001B\u0007¢\u0006\u0004\b\u0002\u0010\u0003¨\u0006\u0004"}, d2 = {"Lcom/margelo/nitro/playagerangedeclaration/PlayAgeRangeDeclaration;", "Lcom/margelo/nitro/playagerangedeclaration/HybridPlayAgeRangeDeclarationSpec;", "<init>", "()V", "react-native-play-age-range-declaration_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@ya.a
/* loaded from: classes3.dex */
public final class PlayAgeRangeDeclaration extends HybridPlayAgeRangeDeclarationSpec {
    @Override // com.margelo.nitro.playagerangedeclaration.HybridPlayAgeRangeDeclarationSpec
    public final Promise getPlayAgeRangeDeclaration() {
        return com.margelo.nitro.core.f.a(Promise.Companion, new e(this, null, 0));
    }

    @Override // com.margelo.nitro.playagerangedeclaration.HybridPlayAgeRangeDeclarationSpec
    public final Promise requestDeclaredAgeRange(double d6, Double d7, Double d8) {
        return com.margelo.nitro.core.f.a(Promise.Companion, new f(1, null));
    }
}
