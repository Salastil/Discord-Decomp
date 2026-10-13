package t7;

import android.view.View;
import com.discord.reactions.ReactionView;
import kotlin.jvm.functions.Function1;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements View.OnClickListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f18223d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Function1 f18224e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ ReactionView.Reaction f18225i;

    public /* synthetic */ a(Function1 function1, ReactionView.Reaction reaction, int i5) {
        this.f18223d = i5;
        this.f18224e = function1;
        this.f18225i = reaction;
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        switch (this.f18223d) {
            case 0:
                this.f18224e.invoke(this.f18225i);
                break;
            default:
                this.f18224e.invoke(this.f18225i);
                break;
        }
    }
}
