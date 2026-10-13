package kotlin.text;

import java.util.List;
import java.util.regex.Matcher;
import kotlin.collections.z0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.ranges.IntRange;

/* loaded from: classes3.dex */
public final class m implements MatchResult {
    public final Matcher a;

    /* renamed from: b, reason: collision with root package name */
    public final CharSequence f13583b;

    /* renamed from: c, reason: collision with root package name */
    public final kotlin.collections.i f13584c;

    /* renamed from: d, reason: collision with root package name */
    public z0 f13585d;

    public m(Matcher matcher, CharSequence input) {
        Intrinsics.checkNotNullParameter(matcher, "matcher");
        Intrinsics.checkNotNullParameter(input, "input");
        this.a = matcher;
        this.f13583b = input;
        this.f13584c = new kotlin.collections.i(1, this);
    }

    @Override // kotlin.text.MatchResult
    public final List a() {
        if (this.f13585d == null) {
            this.f13585d = new z0(this);
        }
        z0 z0Var = this.f13585d;
        Intrinsics.checkNotNull(z0Var);
        return z0Var;
    }

    @Override // kotlin.text.MatchResult
    public final kotlin.collections.i b() {
        return this.f13584c;
    }

    public final IntRange c() {
        Matcher matcher = this.a;
        return yo.j.i(matcher.start(), matcher.end());
    }

    @Override // kotlin.text.MatchResult
    public final String getValue() {
        String group = this.a.group();
        Intrinsics.checkNotNullExpressionValue(group, "group(...)");
        return group;
    }

    @Override // kotlin.text.MatchResult
    public final m next() {
        Matcher matcher = this.a;
        int end = matcher.end() + (matcher.end() == matcher.start() ? 1 : 0);
        CharSequence charSequence = this.f13583b;
        if (end > charSequence.length()) {
            return null;
        }
        Matcher matcher2 = matcher.pattern().matcher(charSequence);
        Intrinsics.checkNotNullExpressionValue(matcher2, "matcher(...)");
        if (matcher2.find(end)) {
            return new m(matcher2, charSequence);
        }
        return null;
    }
}
