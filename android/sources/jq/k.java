package jq;

import java.util.LinkedHashSet;
import java.util.Set;
import kotlin.collections.o0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;

/* loaded from: classes3.dex */
public final class k implements j {
    public static final /* synthetic */ KProperty[] Y = {com.discord.chat.bridge.botuikit.a.p(k.class, "classifierNamePolicy", "getClassifierNamePolicy()Lorg/jetbrains/kotlin/renderer/ClassifierNamePolicy;", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "withDefinedIn", "getWithDefinedIn()Z", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "withSourceFileForTopLevel", "getWithSourceFileForTopLevel()Z", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "modifiers", "getModifiers()Ljava/util/Set;", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "startFromName", "getStartFromName()Z", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "startFromDeclarationKeyword", "getStartFromDeclarationKeyword()Z", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "debugMode", "getDebugMode()Z", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "classWithPrimaryConstructor", "getClassWithPrimaryConstructor()Z", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "verbose", "getVerbose()Z", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "unitReturnType", "getUnitReturnType()Z", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "withoutReturnType", "getWithoutReturnType()Z", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "enhancedTypes", "getEnhancedTypes()Z", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "normalizedVisibilities", "getNormalizedVisibilities()Z", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "renderDefaultVisibility", "getRenderDefaultVisibility()Z", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "renderDefaultModality", "getRenderDefaultModality()Z", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "renderConstructorDelegation", "getRenderConstructorDelegation()Z", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "renderPrimaryConstructorParametersAsProperties", "getRenderPrimaryConstructorParametersAsProperties()Z", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "actualPropertiesInPrimaryConstructor", "getActualPropertiesInPrimaryConstructor()Z", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "uninferredTypeParameterAsName", "getUninferredTypeParameterAsName()Z", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "includePropertyConstant", "getIncludePropertyConstant()Z", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "propertyConstantRenderer", "getPropertyConstantRenderer()Lkotlin/jvm/functions/Function1;", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "withoutTypeParameters", "getWithoutTypeParameters()Z", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "withoutSuperTypes", "getWithoutSuperTypes()Z", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "typeNormalizer", "getTypeNormalizer()Lkotlin/jvm/functions/Function1;", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "defaultParameterValueRenderer", "getDefaultParameterValueRenderer()Lkotlin/jvm/functions/Function1;", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "secondaryConstructorsAsPrimary", "getSecondaryConstructorsAsPrimary()Z", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "overrideRenderingPolicy", "getOverrideRenderingPolicy()Lorg/jetbrains/kotlin/renderer/OverrideRenderingPolicy;", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "valueParametersHandler", "getValueParametersHandler()Lorg/jetbrains/kotlin/renderer/DescriptorRenderer$ValueParametersHandler;", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "textFormat", "getTextFormat()Lorg/jetbrains/kotlin/renderer/RenderingFormat;", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "parameterNameRenderingPolicy", "getParameterNameRenderingPolicy()Lorg/jetbrains/kotlin/renderer/ParameterNameRenderingPolicy;", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "receiverAfterName", "getReceiverAfterName()Z", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "renderCompanionObjectName", "getRenderCompanionObjectName()Z", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "propertyAccessorRenderingPolicy", "getPropertyAccessorRenderingPolicy()Lorg/jetbrains/kotlin/renderer/PropertyAccessorRenderingPolicy;", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "renderDefaultAnnotationArguments", "getRenderDefaultAnnotationArguments()Z", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "eachAnnotationOnNewLine", "getEachAnnotationOnNewLine()Z", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "excludedAnnotationClasses", "getExcludedAnnotationClasses()Ljava/util/Set;", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "excludedTypeAnnotationClasses", "getExcludedTypeAnnotationClasses()Ljava/util/Set;", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "annotationFilter", "getAnnotationFilter()Lkotlin/jvm/functions/Function1;", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "annotationArgumentsRenderingPolicy", "getAnnotationArgumentsRenderingPolicy()Lorg/jetbrains/kotlin/renderer/AnnotationArgumentsRenderingPolicy;", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "alwaysRenderModifiers", "getAlwaysRenderModifiers()Z", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "renderConstructorKeyword", "getRenderConstructorKeyword()Z", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "renderUnabbreviatedType", "getRenderUnabbreviatedType()Z", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "renderTypeExpansions", "getRenderTypeExpansions()Z", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "renderAbbreviatedTypeComments", "getRenderAbbreviatedTypeComments()Z", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "includeAdditionalModifiers", "getIncludeAdditionalModifiers()Z", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "parameterNamesInFunctionalTypes", "getParameterNamesInFunctionalTypes()Z", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "renderFunctionContracts", "getRenderFunctionContracts()Z", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "presentableUnresolvedTypes", "getPresentableUnresolvedTypes()Z", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "boldOnlyForNamesInHtml", "getBoldOnlyForNamesInHtml()Z", 0), com.discord.chat.bridge.botuikit.a.p(k.class, "informativeErrorType", "getInformativeErrorType()Z", 0)};
    public final an.b A;
    public final an.b B;
    public final an.b C;
    public final an.b D;
    public final an.b E;
    public final an.b F;
    public final an.b G;
    public final an.b H;
    public final an.b I;
    public final an.b J;
    public final an.b K;
    public final an.b L;
    public final an.b M;
    public final an.b N;
    public final an.b O;
    public final an.b P;
    public final an.b Q;
    public final an.b R;
    public final an.b S;
    public final an.b T;
    public final an.b U;
    public final an.b V;
    public final an.b W;
    public final an.b X;
    public boolean a;

    /* renamed from: b, reason: collision with root package name */
    public final an.b f13061b = new an.b(b.f13039d, this);

    /* renamed from: c, reason: collision with root package name */
    public final an.b f13062c;

    /* renamed from: d, reason: collision with root package name */
    public final an.b f13063d;

    /* renamed from: e, reason: collision with root package name */
    public final an.b f13064e;

    /* renamed from: f, reason: collision with root package name */
    public final an.b f13065f;

    /* renamed from: g, reason: collision with root package name */
    public final an.b f13066g;

    /* renamed from: h, reason: collision with root package name */
    public final an.b f13067h;

    /* renamed from: i, reason: collision with root package name */
    public final an.b f13068i;
    public final an.b j;
    public final an.b k;

    /* renamed from: l, reason: collision with root package name */
    public final an.b f13069l;

    /* renamed from: m, reason: collision with root package name */
    public final an.b f13070m;

    /* renamed from: n, reason: collision with root package name */
    public final an.b f13071n;

    /* renamed from: o, reason: collision with root package name */
    public final an.b f13072o;

    /* renamed from: p, reason: collision with root package name */
    public final an.b f13073p;

    /* renamed from: q, reason: collision with root package name */
    public final an.b f13074q;

    /* renamed from: r, reason: collision with root package name */
    public final an.b f13075r;

    /* renamed from: s, reason: collision with root package name */
    public final an.b f13076s;

    /* renamed from: t, reason: collision with root package name */
    public final an.b f13077t;

    /* renamed from: u, reason: collision with root package name */
    public final an.b f13078u;

    /* renamed from: v, reason: collision with root package name */
    public final an.b f13079v;

    /* renamed from: w, reason: collision with root package name */
    public final an.b f13080w;

    /* renamed from: x, reason: collision with root package name */
    public final an.b f13081x;

    /* renamed from: y, reason: collision with root package name */
    public final an.b f13082y;

    /* renamed from: z, reason: collision with root package name */
    public final an.b f13083z;

    public k() {
        Boolean bool = Boolean.TRUE;
        this.f13062c = new an.b(bool, this);
        this.f13063d = new an.b(bool, this);
        this.f13064e = new an.b(i.f13054e, this);
        Boolean bool2 = Boolean.FALSE;
        this.f13065f = new an.b(bool2, this);
        this.f13066g = new an.b(bool2, this);
        this.f13067h = new an.b(bool2, this);
        this.f13068i = new an.b(bool2, this);
        this.j = new an.b(bool2, this);
        this.k = new an.b(bool, this);
        this.f13069l = new an.b(bool2, this);
        this.f13070m = new an.b(bool2, this);
        this.f13071n = new an.b(bool2, this);
        this.f13072o = new an.b(bool, this);
        this.f13073p = new an.b(bool, this);
        this.f13074q = new an.b(bool2, this);
        this.f13075r = new an.b(bool2, this);
        this.f13076s = new an.b(bool2, this);
        this.f13077t = new an.b(bool2, this);
        this.f13078u = new an.b(bool2, this);
        this.f13079v = new an.b((Object) null, this);
        this.f13080w = new an.b(bool2, this);
        this.f13081x = new an.b(bool2, this);
        this.f13082y = new an.b(d.M, this);
        this.f13083z = new an.b(d.N, this);
        this.A = new an.b(bool, this);
        this.B = new an.b(n.f13085e, this);
        this.C = new an.b(e.a, this);
        this.D = new an.b(s.f13094d, this);
        this.E = new an.b(o.f13087d, this);
        this.F = new an.b(bool2, this);
        this.G = new an.b(bool2, this);
        this.H = new an.b(p.f13091d, this);
        this.I = new an.b(bool2, this);
        this.J = new an.b(bool2, this);
        this.K = new an.b(o0.f13515d, this);
        this.L = new an.b(l.a, this);
        this.M = new an.b((Object) null, this);
        this.N = new an.b(a.f13033i, this);
        this.O = new an.b(bool2, this);
        this.P = new an.b(bool, this);
        this.Q = new an.b(bool, this);
        this.R = new an.b(bool2, this);
        this.S = new an.b(bool2, this);
        this.T = new an.b(bool, this);
        this.U = new an.b(bool, this);
        this.V = new an.b(bool2, this);
        this.W = new an.b(bool2, this);
        this.X = new an.b(bool, this);
    }

    @Override // jq.j
    public final void a() {
        this.F.setValue(this, Y[30], Boolean.TRUE);
    }

    @Override // jq.j
    public final void b() {
        this.f13067h.setValue(this, Y[6], Boolean.TRUE);
    }

    @Override // jq.j
    public final void c() {
        this.G.setValue(this, Y[31], Boolean.TRUE);
    }

    @Override // jq.j
    public final void d(Set set) {
        Intrinsics.checkNotNullParameter(set, "<set-?>");
        this.f13064e.setValue(this, Y[3], set);
    }

    @Override // jq.j
    public final void e(LinkedHashSet linkedHashSet) {
        Intrinsics.checkNotNullParameter(linkedHashSet, "<set-?>");
        this.L.setValue(this, Y[36], linkedHashSet);
    }

    @Override // jq.j
    public final void f() {
        this.f13080w.setValue(this, Y[21], Boolean.TRUE);
    }

    @Override // jq.j
    public final void g(c cVar) {
        Intrinsics.checkNotNullParameter(cVar, "<set-?>");
        this.f13061b.setValue(this, Y[0], cVar);
    }

    @Override // jq.j
    public final void h(o oVar) {
        Intrinsics.checkNotNullParameter(oVar, "<set-?>");
        this.E.setValue(this, Y[29], oVar);
    }

    @Override // jq.j
    public final void i() {
        this.f13065f.setValue(this, Y[4], Boolean.TRUE);
    }

    @Override // jq.j
    public final void j() {
        this.f13062c.setValue(this, Y[1], Boolean.FALSE);
    }

    @Override // jq.j
    public final Set k() {
        return (Set) this.L.getValue(this, Y[36]);
    }

    @Override // jq.j
    public final void l() {
        q qVar = s.f13095e;
        Intrinsics.checkNotNullParameter(qVar, "<set-?>");
        this.D.setValue(this, Y[28], qVar);
    }

    @Override // jq.j
    public final void m() {
        this.f13081x.setValue(this, Y[22], Boolean.TRUE);
    }

    public final boolean n() {
        return ((Boolean) this.f13067h.getValue(this, Y[6])).booleanValue();
    }
}
