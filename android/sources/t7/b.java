package t7;

import android.view.View;
import com.discord.reactions.ReactionView;
import com.discord.reactions.ReactionViewHolder;
import com.discord.reactions.ShortcutsFlexbox;
import kotlin.jvm.functions.Function1;

/* loaded from: classes.dex */
public final /* synthetic */ class b implements View.OnLongClickListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f18226d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Function1 f18227e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ ReactionView.Reaction f18228i;

    public /* synthetic */ b(Function1 function1, ReactionView.Reaction reaction, int i5) {
        this.f18226d = i5;
        this.f18227e = function1;
        this.f18228i = reaction;
    }

    @Override // android.view.View.OnLongClickListener
    public final boolean onLongClick(View view) {
        boolean bind$lambda$2$lambda$1;
        boolean reactions$lambda$4$lambda$3;
        switch (this.f18226d) {
            case 0:
                bind$lambda$2$lambda$1 = ReactionViewHolder.bind$lambda$2$lambda$1(this.f18227e, this.f18228i, view);
                return bind$lambda$2$lambda$1;
            default:
                reactions$lambda$4$lambda$3 = ShortcutsFlexbox.setReactions$lambda$4$lambda$3(this.f18227e, this.f18228i, view);
                return reactions$lambda$4$lambda$3;
        }
    }
}
